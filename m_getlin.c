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
