#include"shell.h"
/***/
int main(int argc, char **argv, char *envp[])
{int d = 0, x = 0, i = 0, m = 0;
size_t n = 25;
char *c = NULL, *r = NULL, *k = NULL;
char *z = NULL, *u = NULL;
char **e = NULL;
char **g = NULL;
(void)argc;
(void)argv;

r = pathen(environ);
c = malloc(25);
if (r != NULL)
{
	k = strdup(r);
}

	while (1)
	{d++;
		if ((isatty(STDIN_FILENO)))
		{
			_printf("$ ");
		}

		if ((_getline(&c, &n, stdin)) == -1)
		{
			if ((isatty(STDIN_FILENO)))
		{
			_printf("\n");
		}
			if (c != NULL)
			_free(c, NULL);
			if (k != NULL)
			_free(k, NULL);
			if (e != NULL)
			_free(NULL, e);
			if (u != NULL)
			_free(u, NULL);
			if (g != NULL)
			_free(NULL, g);
			exit(x);
		}
		/*printf("c---(%s)\n", c);*/

		if (c[(strlen(c)) - 1] == '\n')
		c[(strlen(c)) - 1] = '\0';

		if (c[(strlen(c)) - 1] == ';')
		c[(strlen(c)) - 1] = '\0';

		if ((z = _scan(c)) == NULL)
		{
			_free(k, NULL);
			_free(c, NULL);
			c = NULL;
			k = NULL;
			continue;
		}
		/*printf("z--(%s)\n", z);*/
/**********************************************************************************/
		g = semi_colon(z);
		/*printf("g--(%s)\n", *g);*/
		if (g != NULL)
		{
			while (g[m] != NULL)
			{

		
				if ((e = _too(g[m])) == NULL)
				continue;

				i = 0;
		/*while (e[i] != NULL)*/
		/*{*/
			/*printf("e--%d--(%s)\n", i, e[i]);*/
			/*i++;*/
		/*}*/
				if (r == NULL)
				{
					env(g[m], envp, c, e);
				}

				i = m_exit(e, d, k, x, c, u, g);
		/*printf("\n\n\n---i--(%d)--\n\n", i);*/
				if (i == -1)
				{
					if (c != NULL)
					{_free(c, NULL);}
					if (k != NULL)
					{_free(k, NULL);}
					if (e != NULL)
					{_free(NULL, e);}
					if (g != NULL)
					_free(NULL, g);

			/*if (u != NULL)*/
			/*{_free(u, NULL);}*/
				e = NULL;
			/*u = NULL;*/
				k = NULL;
				c = NULL;
				x = 127;
			if (!(isatty(STDIN_FILENO)))
			{
				exit(2);
			}
				continue;
			}

		/*printf("r------(%s)\n\n\n", r);*/
		/*printf("k--bef--(%s)\n\n", k);*/

			if (r != NULL)
			{
				if (k == NULL)
				k = strdup(r);
			}

			/*printf("k--after--(%s)\n", k);*/
		if (u != NULL)
		{
			_free(u, NULL);
			u = NULL;
		}
			
		if ((u = u_thass(e, k)) == NULL)
		{
			_err(d, e, c, k);
			_free(g[m], NULL);
			k = NULL;
			e = NULL;
			c = NULL;
			g[m] = NULL;
			x = 127;
			/*continue;*/
		}
			_free(k, NULL);
			k = NULL;

			if (u != NULL)
				{existance(e, u);}

				_free(u, e);
				/*_free(g[m], NULL);*/
				u = NULL;
				e = NULL;


			/*if (!(isatty(STDIN_FILENO)))*/
			/*{*/
				/*_free(c, NULL);*/
				/*exit(0);*/
			/*}*/
				x = 0;
		

				m++;

			}

			/*if (g != NULL)*/
			/*_free(NULL, g);*/
			/*if (c != NULL)*/
			/*{_free(c, NULL);}*/
			continue;
		}
		else
/******************************************************************************************/
		/*printf("z--(%s)\n", z);*/

		if ((e = _too(z)) == NULL)
		continue;
		/*if ((strcmp(z, "env")) == 0)*/
		/*{*/
			/*execve("/bin/env", e, NULL);*/
			/*continue;*/
		/*}*/
		i = 0;
		/*while (e[i] != NULL)*/
		/*{*/
			/*printf("e--%d--(%s)\n", i, e[i]);*/
			/*i++;*/
		/*}*/
		if (r == NULL)
		{
			env(z, envp, c, e);
		}

		i = m_exit(e, d, k, x, c, u, g);
		/*printf("\n\n\n---i--(%d)--\n\n", i);*/
		if (i == -1)
		{
			if (c != NULL)
			{_free(c, NULL);}
			if (k != NULL)
			{_free(k, NULL);}
			if (e != NULL)
			{_free(NULL, e);}
			if (g != NULL)
			{_free(NULL, g);}

			/*if (u != NULL)*/
			/*{_free(u, NULL);}*/
			e = NULL;
			/*u = NULL;*/
			k = NULL;
			c = NULL;
			x = 127;
		if (!(isatty(STDIN_FILENO)))
		{
			exit(2);
		}
			continue;
		}

		/*printf("r------(%s)\n\n\n", r);*/
		/*printf("k--bef--(%s)\n\n", k);*/

		if (r != NULL)
		{
			if (k == NULL)
			k = strdup(r);
		}

			/*printf("k--after--(%s)\n", k);*/
		if (u != NULL)
		{
			_free(u, NULL);
			u = NULL;
		}
			
		if ((u = u_thass(e, k)) == NULL)
		{
			_err(d, e, c, k);
			k = NULL;
			e = NULL;
			c = NULL;
			x = 127;
			continue;
		}
		_free(k, NULL);
		k = NULL;

		
		existance(e, u);

			_free(u, e);
			u = NULL;
			e = NULL;
			/*if (!(isatty(STDIN_FILENO)))*/
			/*{*/
				/*_free(c, NULL);*/
				/*exit(0);*/
			/*}*/
			x = 0;
	}
			
return (0);
}

