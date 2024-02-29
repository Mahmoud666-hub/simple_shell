#include"shell.h"
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
