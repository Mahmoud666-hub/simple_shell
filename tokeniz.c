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

	/*printf("s---(%s)\n", s);*/
	tok = _strtok(b, ":");

	while (tok != NULL)
	{
		a = malloc(strlen(s) + strlen(tok) + 2);
			strcpy(a, tok);
			strcat(a, "/");
			strcat(a, s);

			if ((access(a, X_OK)) == 0)
			{
				/*printf("a---(%s)\n", a);*/
				return (a);
			}
			else
			_free(a, NULL);
			a = NULL;
			tok = _strtok(NULL, ":");
			/*_free(a, NULL);*/
			/*a = NULL;*/
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
/**
 * u_thass - path
 * @e: parameter
 * @r: parameter
 * @z:parameter
 * Return: pointer
*/
char *u_thass(char **e, char *z, char *r)
{
	char *u = NULL;
	int x = 0;
	(void)z;
	if (e[0][0] != '/')
	{
		/*printf("e[0]-re-(%s)\n", e[0]);*/
		if ((x = access(e[0], X_OK)) == 0)
		{
			/*printf("x--%d\n", x);*/
			u = strdup(e[0]);
			return (u);
		}
		else
		u = paath(e[0], r);
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
			return (u);
		}
	}
return (u);
}

/**
 * existance - exist of file
 * @e: parameter
 * @c: parameter
 * @u: parameter
*/
void existance(char **e, char *c, char *u)
{
	int x = 0;
	/*if(e[0] != NULL)*/
	/*{x = access(e[0], X_OK);*/
		if (x == -1)
		{
			_free(u, e);
			_free(c, NULL);
			exit(2);
		}
	/*}*/

	if (u != NULL)
	{
		m_exx(u, e);
		
			_free(u, e);
			_free(c, NULL);
			e = NULL;
			u = NULL;
	}
	else
	{
		_free(NULL, e);
		e = NULL;
		_free(c, NULL);
		exit(2);
	}
}
