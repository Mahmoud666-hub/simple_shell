#include"shell.h"
/**
 * _getline - take input
 * @p: parameter
 * @n: parameter
 * @f: parameter
 * Return: integer
*/
ssize_t _getline(char **p, size_t *n, FILE *f)
{
	ssize_t a = 0;

	a = getline(p, n, f);

	return (a);
}

/**
 * _printf - print
 * @format: parameter
 * Return: integer
*/
int _printf(const char *format, ...)
{
	int x;
	va_list args;

	va_start(args, format);
	x = vprintf(format, args);
	va_end(args);

	return (x);
}

/**
 * _strtok - string token.
 * @s: input
 * @e: delim
 * Return: string
*/
char *_strtok(char *s, const char *e)
{
	char *t = NULL;

	t = strtok(s, e);

	return (t);
}

/**
 * _atoi - convert string to integer.
 * @h: parameter
 * Return: integer
*/
int _atoi(char *h)
{
	int q = 0, i = 0, e = 0;
	int a = 1;

	while (h[i] != '\0')
	{
		if (h[i] > '9')
		{
			return (-1);
		}
		else if (h[i] < '0')
		{
			return (-1);
		}
		i++;
		e++;
		if (e != 1)
		{
			a *= 10;
		}
	}
	i = 0;

	if (e != 0)
	{
	while (e != 0)
	{
	if (e == 1)
	{
		q = q + (h[i] - '0');
		return (q);
	}
	else
	q = q + ((h[i] - '0') * a);
	a /= 10;
	i++;
	e--;
	}
	}
	return (q);
}
