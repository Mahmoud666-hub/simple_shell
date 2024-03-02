#include"shell.h"
/**
 * _scan - handle #
 * @s: parameter
 * Return: pointer
*/
char *_scan(char *s)
{
	int i = 0;
	char *b = NULL;

	while (s[i] != '\0')
	{
		if (s[i] == '#' && s[i - 1] == ' ')
		{
			b = strtok(s, "#");
			break;
		}
		i++;
	}
	if (b == NULL)
	{
		return (s);
	}

return (b);
}
