#include"shell.h"
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
		}
		free(e);
		e = NULL;
	}
}
