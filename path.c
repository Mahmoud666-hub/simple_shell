#include"shell.h"
/**
 * u_thass - path
 * @e: parameter
 * @r: parameter
 * @z:parameter
 * Return: pointer
*/
char *u_thass(char **e, char *r)
{
	char *u = NULL;
	/*int x = 0;*/

	if (e[0][0] != '/' || e[0][0] != '.')
	{

		/*if ((x = access(e[0], X_OK)) == 0)*/
		/*{*/
			/*printf("e[0]--path--(%s)\n", e[0]);*/
			/*u = strdup(e[0]);*/
			/*return (u);*/
		/*}*/
		/*else*/
		/*{*/
		u = paath(e[0], r);
		return (u);
		/*}*/
	}
	else
	{
		if ((access(e[0], X_OK)) == 0)
		{
			u = strdup(e[0]);
			return (u);
		}
		else
		{
			u = NULL;
			/*if (!(isatty(STDIN_FILENO)))*/
        /*{*/
            /*exit(2);*/
       /*}*/
			return (u);
		}
	}
return (u);
}

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

	tok = _strtok(b, ":");

	while (tok != NULL)
	{
		a = malloc(strlen(s) + strlen(tok) + 2);
			strcpy(a, tok);
			strcat(a, "/");
			strcat(a, s);

			if ((access(a, X_OK)) == 0)
			{
				
				return (a);
			}
			else
			_free(a, NULL);
			a = NULL;
			tok = _strtok(NULL, ":");
	}
if (a != NULL)
{
	_free(a, NULL);
}
return (NULL);
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

/****/
void env(char *s, char *envp[], char *c, char **e)
{
	int i = 0;

	if ((strcmp(s, "env")) == 0)
	{
		while (envp[i] != NULL)
		{
			_printf("%s\n", envp[i]);
			i++;
		}
		_free(c, e);
		exit(0);
	}
	

}