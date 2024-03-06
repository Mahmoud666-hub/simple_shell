#include"shell.h"
/***/
int main()
{int d = 0, x = 0, i = 0;
size_t n = 25;
char *c = NULL, *r = NULL, *k = NULL;
char *z = NULL, *u = NULL;
char **e = NULL;
c = malloc(25);
r = pathen(environ);
k = strdup(r);

	while (1)
	{d++;
		if ((isatty(STDIN_FILENO)))
		{
			_printf("$ ");
		}

		if ((_getline(&c, &n, stdin)) == -1)
		{
			_printf("\n");
			if (c != NULL)
			_free(c, NULL);
			if (k != NULL)
			_free(k, NULL);
			if (e != NULL)
			_free(NULL, e);
			if (u != NULL)
			_free(u, NULL);
			exit(x);
		}
		/*printf("c---(%s)\n", c);*/

		if (c[(strlen(c)) - 1] == '\n')
		c[(strlen(c)) - 1] = '\0';

		if ((z = _scan(c)) == NULL)
		{
			_free(c, NULL);
			c = NULL;
			continue;
		}
		/*printf("z---(%s)\n", z);*/

		if ((e = _too(z)) == NULL)
		continue;

		i = 0;
		/*while (e[i] != NULL)*/
		/*{*/
			/*printf("e--%d--(%s)\n", i, e[i]);*/
			/*i++;*/
		/*}*/

		i = m_exit(e, d, k, x, c, u);
		/*printf("\n\n\n---i--(%d)--\n\n", i);*/
		if (i == -1)
		{
			if (c != NULL)
			{_free(c, NULL);}
			if (k != NULL)
			{_free(k, NULL);}
			if (e != NULL)
			{_free(NULL, e);}

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
		

		/*printf("k--bef--(%s)\n\n", k);*/

			if (k == NULL)
			k = strdup(r);
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
		/*printf("u---(%s)\n", u);*/
		
		existance(e, c, u, d);

			_free(u, e);
			u = NULL;
			e = NULL;
			x = 0;
	}
			
return (0);
}

