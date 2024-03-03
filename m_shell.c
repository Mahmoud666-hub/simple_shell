#include"shell.h"

/**
 * main - shell
 * Return: integer
*/

int main(void)
{size_t n = 25, d = 0, t = 0;
	int x = 0;
	char *u = NULL, *r = NULL, *k = NULL, **e = NULL;
	char *z = NULL;
	char *c = malloc(25);

	 r = pathen(environ);
	 k = strdup(r);
if (isatty(STDIN_FILENO))
{
	while (isatty(STDIN_FILENO))
	 {d++;
		z = NULL;
		if ((write(1, "$ ", 3)) == -1)
		 {exit(1);
		}

		if ((_getline(&c, &n, stdin)) == -1)
		 {_free(c, NULL);
		 c = NULL;
			ctrl_d(x, k);
		}

		t = strlen(c);
		if (c[t - 1] == '\n')
	     {c[t - 1] = '\0';
		 }
		z = _scan(c);
		if (z == NULL)
		{continue;
		}
		e = _too(z);
		if (e == NULL)
		 {continue;
		}
		 m_exit(e, x, k, c);
		 if (k == NULL)
		 {k = strdup(r);
		 }
		 if (e[0][0] != '/')
		 {
			u = paath(z, k);
		 }
		 else
		 u =strdup(e[0]);
		 _free(k,NULL);
		 k = NULL;

		if ((access(u, X_OK)) == 0)
		{m_exx(u, e);
			_free(u, e);
			e = NULL;
			u = NULL;
		}
		else
		{_err(d, e[0], z);
			_free(NULL, e);
			e = NULL;
			x = 127;
		}
	}
}

	if ((_getline(&c, &n, stdin)) == -1)
		 {_free(c, NULL);
		 c = NULL;
			ctrl_d(x, k);
		}
	t = strlen(c);
		if (c[t - 1] == '\n')
	     {c[t - 1] = '\0';
		 }
		z = _scan(c);
		if (z == NULL)
		{exit(127);
		}
		e = _too(z);
		if (e == NULL)
		 {exit(127);
		}
	if (e[0][0] != '/')
		 {
			u = paath(z, r);
		 }
		 else
		 u =strdup(e[0]);
		 if ((access(u, X_OK)) == 0)
		{m_exx(u, e);
			_free(u, e);
			e = NULL;
			u = NULL;
		}
		else
		{
		_free(u, e);
		exit(127);
		}

_free(u,e);
_free(c, NULL);
_free(k, NULL);

	return (0); }

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

