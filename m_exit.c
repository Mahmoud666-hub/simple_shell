#include"shell.h"
/**
 * m_exit - exit program
 * @k: input string
 * @e: after tok
 * @d: counter
*/
void m_exit(char **e, int d, char *k)
{
	int a = 0, l = 0;

	if ((strcmp(e[0], "exit")) == 0)
	{
		if (e[1] == NULL)
		{
			if (d == 1)
			{
				_free(k, e);
				exit(0);
			}
			_free(k, e);
			exit(127);
		}
		else
		while (e[1][l] != '\0')
		{l++;
		}
		a = _atoi(e[1]);
		if (a == -1)
		{_printf("hsh: %d: exit: Illegal number: %s\n", d, e[1]);
		}
		else
		{
			_free(k, e);
			exit(a);
		}
	}
}

/**
 * ctrl_d - exit program
 * @x: parameter
 * @k: parameter
 * @e: parameter
*/
void ctrl_d(int x, char *k)
{
	if (x == 1)
	{
		_printf("\n");
		_free(k, NULL);
		exit(0);
	}
	else if (x > 1)
	{
		_printf("\n");
		_free(k, NULL);
		exit(127);
	}
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
		s = NULL;
	}

	if (e != NULL)
	{
		for (n = 0; e[n] != NULL; n++)
		{
			free(e[n]);
			e[n] = NULL;
		}
		if (e != NULL)
		{
			free(e);
		}
		e = NULL;
	}
}
