#include"shell.h"
/**
 * main - shell
 * Return: integer
*/
int main(void)
{pid_t z = 0;
	size_t n = 0, d = 0;
	char *c = NULL, *u = NULL, *r = NULL, *k = NULL, **e = NULL;

	 r = pathen(environ);
	 k = strdup(r);
	while (1)
	 {d++;
		if ((write(1, "$ ", 3)) == -1)
		 {exit(1);
		}
		if ((_getline(&c, &n, stdin)) == -1)
		 {ctrl_d(d, c, e);
		}
		 e = _too(c);
		if (e == NULL)
		 {continue;
		}
		 m_exit(c, e, d);
		 u = paath(c, r);
		 r = NULL;
		 r = strdup(k);
		if ((access(u, X_OK)) == 0)
		{
			z = fork();
			if (z != -1)
			{
				if (z == 0)
				{execve(u, e, environ);
				}
				else if (z != 0)
				{wait(NULL);
					_free(c, e);
				}
			}
		}
		else
		{_err(d, e[0], c);
		}
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
