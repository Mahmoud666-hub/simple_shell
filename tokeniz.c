#include"shell.h"
/**
 * _too - tokanize string
 * @s: parameter
 * Return: two d array
*/
char **_too(char *s)
{
	int i = 0, a = 0, r = 1;
	char **p = NULL;
	char *u = NULL;

	while (s[i] != '\0')
	{
		if (s[i] == ' ')
		{r = 1;
		}
		else
		{a = a + r;
		   r = 0;
		}
		i++;
	}

	if (a == 0)
	{
		p = NULL;
		u = NULL;
		return (NULL);
	}

	p = malloc((a + 2) * sizeof(char *));
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	u = _strtok(s, " ");
	while (u != NULL)
	{
		p[i] = strdup(u);
		u = _strtok(NULL, " ");
		i++;
	}
	p[i] = NULL;
	return (p);
}
