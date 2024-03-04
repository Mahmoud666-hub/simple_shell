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
	if (s[0] == '#')
	{
		_free(s, NULL);
		exit(0);
	}
	

	while (s[i] != '\0')
	{
		if (s[i] == '#' && s[i - 1] == ' ')
		{
			b = _strtok(s, "#");

			return (b);
		}
		i++;
	}

	if (b == NULL && s[0] != '#')
	{
		return (s);
	}

return (NULL);
}
