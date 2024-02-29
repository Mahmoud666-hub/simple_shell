#include"shell.h"
/**
 * paath - find the full path
 * @s: parameter
 * @b: parameter
 * Return: string
*/
char *paath(char *s, char *b)
{
	char *a = NULL;
	char *tok = NULL;

	if (s[0] == '/')
	{
		return (s);
	}

	tok = _strtok(b, ":");

	while (tok != NULL)
	{
		a = malloc(strlen(s) + strlen(tok) + 2);
			strcpy(a, tok);
			strcat(a, "/");
			strcat(a, s);

			if ((access(a, X_OK)) == 0)
			{
				/*free(tok);*/
				return (a);
			}
			else
			free(a);
			tok = _strtok(NULL, ":");
	}

return (a);
}

/**
 * pathen - full paths all.
 * @t: environ
 * Return: string
*/
char *pathen(char **t)
{
	int i = 0;
	char *pat = NULL;

	while (t[i] != NULL)
	{
		if ((strncmp(t[i], "PATH=", 5)) == 0)
		{
			pat = t[i] + 5;
			break;
		}
		i++;
	}

	return (pat);
}
