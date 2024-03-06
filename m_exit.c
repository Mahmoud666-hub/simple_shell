#include"shell.h"
/**
 * m_exit - exit program
 * @k: input string
 * @e: after tok
 * @d: counter
*/
int m_exit(char **e, int d, char *k, int x, char *c, char *u)
{
	int a = 0, l = 0;

	/*printf("e[0]--(%s)\n", e[0]);*/
	if ((strcmp(e[0], "exit")) == 0)
	{
		if (e[1] == NULL)
		{
			if (c != NULL)
			{_free(c, NULL);}

			if (k != NULL)
			{_free(k, NULL);}

			if (e != NULL)
			{_free(NULL, e);}

			if (u != NULL)
			{_free(u, NULL);}

			exit(x);
		}
		else

		/*printf("e[1]--(%s)\n", e[1]);*/

		/*while (e[1][l] != '\0')
		{
			l++;
		}*/
		a = _atoi(e[1]);

		if (a == -1)
		{
			fprintf(stderr, "./hsh: %d: exit: Illegal number: %s\n", d, e[1]);
			
			l = -1;
			return (l);

		}
		else
		{
			_free(c, NULL);
			_free(k, e);
			_free(u, NULL);
			exit(a);
		}
	}
return (l);
}

/**
 * _free - clean heap
 * @s: input string
 * @e: after tok
*/
void _free(char *s, char **e)
{
	int n = 0;

	if (s != NULL)
	{
		free(s);
	}

	if (e != NULL)
	{
		for (n = 0; e[n] != NULL; n++)
		{
			free(e[n]);
		}

		free(e);	
	}
}
