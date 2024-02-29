#include"shell.h"
/**
 * ctrl_d - exit program
 * @x: parameter
 * @s: parameter
 * @e: parameter
*/
void ctrl_d(int x, char *s, char **e)
{
	if (x == 1)
	{
		_printf("\n");
		_free(s, e);
		exit(0);
	}
	else if (x > 1)
	{
		_printf("\n");
		_free(s, e);
		exit(127);
	}
}
