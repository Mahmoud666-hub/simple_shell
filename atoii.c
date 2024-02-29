#include"shell.h"
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
