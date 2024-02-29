#include"shell.h"
/**
 * m_exit - exit program
 * @s: input string
 * @e: after tok
 * @d: counter
*/
void m_exit(char *s, char **e, int d)
{
		int a = 0, l = 0;

		while (e[0][l] != '\0')
			 {l++;
			}

			if (e[0][l - 1] == '\n')
			 {e[0][l - 1] = '\0';
			}

				if ((strcmp(e[0], "exit")) == 0)
				{
				if (e[1] == NULL)
				{
					if (d == 1)
						{_free(s, e);
							exit(0);
						}
						_free(s, e);
						exit(127);
				}
				else
				while (e[1][l] != '\0')
			 {l++;
			}
			if (e[1][l - 1] == '\n')
			 {e[1][l - 1] = '\0';
			}
				a = _atoi(e[1]);
				if (a == -1)
				{_printf("hsh: %d: exit: Illegal number: %s\n", d, e[1]);
				}
				else
				{_free(s, e);
						exit(a);
				}
		}
}
