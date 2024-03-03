#include"shell.h"

/**
 * main - shell
 * Return: integer
*/

int main(void)
{size_t n = 25, d = 0, t = 0;
	char *u = NULL, *r = NULL, *k = NULL, **e = NULL;
	char *z = NULL;
	char *c = malloc(25);

	 r = pathen(environ);
	 k = strdup(r);

	while (1)
	 {d++;
		z = NULL;
		if ((write(1, "$ ", 3)) == -1)
		 {exit(1);
		}
		if ((_getline(&c, &n, stdin)) == -1)
		 {_free(c, NULL);
		 c = NULL;
			ctrl_d(d, k);
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
		 m_exit(e, d, k, c);
		 if (k == NULL)
		 {k = strdup(r);
		 }
		 u = paath(z, k);
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
		}
	}
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

