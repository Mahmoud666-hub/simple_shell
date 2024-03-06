#include"shell.h"
/**
 * existance - exist of file
 * @e: parameter
 * @c: parameter
 * @u: parameter
*/
int existance(char **e, char *c, char *u, int d)
{
	int x = 0;
    (void)d;
	(void)c;

	if (u != NULL)
	{
		m_exx(u, e);
	}
	else
	{
        x = 127;
		if (!(isatty(STDIN_FILENO)))
        {
            exit(2);
        }
	}
return (x);
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
 * _err - error
 * @w: parameter
 * @j: parameter
 * @c: parameter
*/

void _err(int w, char **e, char *c, char *k)
{
			if ((strcmp(e[0], "exit")) != 0)
			{
				_printf("hsh: %d: %s: not found\n", w, e[0]);
				_free(k, e);
				_free(c, NULL);
			}
}
