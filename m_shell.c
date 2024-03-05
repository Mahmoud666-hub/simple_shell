#include"shell.h"

/**
 * main - shell
 * Return: integer
*/

int main(void)
{
	char *r = NULL;

	r = pathen(environ);

if (isatty(STDIN_FILENO))
{
act_mod(r);
}
while (1)
{
	non_rec(r);
}

	return (0);
}

/**
 * _err - error
 * @w: parameter
 * @j: parameter
 * @c: parameter
*/

void _err(int w, char *j, char *c)
{
			if ((strcmp(j, "exit")) != 0)
			{
				_printf("hsh: %d: %s: not found\n", w, c);
			}
}

/**
 * m_exx - execute function
 * @u: parameter
 * @e: parameter
*/

void m_exx(char *u, char **e)
{
	pid_t z = 0;

	z = fork();
	if (z != -1)
	{
		if (z == 0)
		{
			execve(u, e, environ);
		}
		else if (z != 0)
		{
			wait(NULL);
			return;
		}
	}
}

/**
 * non_rec - nonactive mode
 * @r: parameter
*/
void non_rec(char *r)
{
	char *z = NULL, *u = NULL;
	/*char *w = NULL;*/
	char **e = NULL;
	int x = 0;
	size_t t = 0, n = 25;
	char *c = malloc(25);

		if ((_getline(&c, &n, stdin)) == -1)
	{
			_free(c, NULL);
			c = NULL;
			/*_printf("\n");*/
			exit(x);
	}
		/*printf("%s", c);*/
		/*w = strdup(c);*/
		/*multi(w);*/
		t = strlen(c);
		if (c[t - 1] == '\n')
		 {c[t - 1] = '\0';
		}

		z = _scan(c);
		/*printf("z---%s\n", z);*/
		if (z == NULL)
		{
			_free(c, NULL);
			exit(0);
		}

		e = _too(z);
		/*while (e[x] != NULL)*/
		/*{*/
			/*printf("e--%d---%s\n", x, e[x]);*/
			/*x++;*/
		/*}*/
		x = 0;
		if (e == NULL)
		 {_free(c, NULL);
			exit(0);
		}
		x = 1;
		m_exit(e, x, NULL, c);
		u = u_thass(e, z, r);
		printf("u---%s\n", u);
		existance(e, c, u);

}

/**
 * act_mod - actve mode
 * @r: parameter
*/
void act_mod(char *r)
{char *z = NULL, *u = NULL, *k = NULL;
	char **e = NULL;
	size_t t = 0, n = 25, x = 0, d = 0;
	char *c = malloc(25);

	k = strdup(r);
	while (1)
	 {d++;
		z = NULL;
		if ((write(1, "$ ", 3)) == -1)
		exit(2);
		if ((_getline(&c, &n, stdin)) == -1)
		 {_free(c, NULL);
		 c = NULL;
			ctrl_d(x, k);
		}
		t = strlen(c);
		if (c[t - 1] == '\n')
		c[t - 1] = '\0';
		z = _scan(c);
		if (z == NULL)
		continue;
		e = _too(z);
		 m_exit(e, x, k, c);
		if (k == NULL)
		 {k = strdup(r); }
		u = u_thass(e, z, k);
		 _free(k, NULL);
		 k = NULL;
		if (u != NULL)
		{m_exx(u, e);
			_free(u, e);
			e = NULL;
			u = NULL; }
		else
		{_err(d, e[0], z);
			_free(NULL, e);
			e = NULL;
			x = 127; }
	} }
