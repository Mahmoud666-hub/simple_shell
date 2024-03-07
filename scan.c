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
		return (NULL);
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
/****/
char **semi_colon(char *z)
{
	int a = 0;
	int r = 1;
	int i = 0;
	char **e = NULL;
	char *u = NULL;

	while (z[i] != '\0')
	{
		if (z[i] == ';')
		{
			r = 1;
		}
		else
		{
			a = a + r;
			r = 0;
		}
		i++;
	}
	printf("a--%d--\n", a);
	if (a == 0 || a == 1)
	{
		return (NULL);
	}
	
	e = malloc((a + 2) * sizeof(char *));
	if (e == NULL)
	{
		return (NULL);
	}
	u = _strtok(z, ";");
	i = 0;
	while (u != NULL)
	{
		e[i] = strdup(u);
		u = _strtok(NULL, ";");
		i++;
	}
	e[i] = NULL;

	if (e == NULL)
	{
		_free(NULL, e);
		return (NULL);
	}

	return (e);
}
