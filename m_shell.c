#include"shell.h"
/**
 * main - shell
 * Return: integer
*/
int main(void)
{size_t n = 0, d = 0;
	char *c = NULL, *u = NULL, *r = NULL, *k = NULL, **e = NULL;
	char *z = NULL;

	 r = pathen(environ);
	 k = strdup(r);
	while (1)
	 {d++;
		z = NULL;
		_free(r, NULL);
		if ((write(1, "$ ", 3)) == -1)
		 {exit(1);
		}
		if ((_getline(&c, &n, stdin)) == -1)
		 {_free(c, NULL);
			ctrl_d(d, k);
		}

		if (c[(strlen(c)) - 1] == '\n')
	     {c[(strlen(c)) - 1] = '\0';
	}
		z = _scan(c);
		_free(c, NULL);
		c = NULL;
		e = _too(z);
		if (e == NULL)
		 {continue;
		}
		 m_exit(e, d, k);
		 u = paath(z, r);
		 r = NULL;
		 r = strdup(k);
		if ((access(u, X_OK)) == 0)
		{m_exx(u, e);
			_free(u, e);
		}
		else
		{_err(d, e[0], z);
			_free(NULL, e);
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

