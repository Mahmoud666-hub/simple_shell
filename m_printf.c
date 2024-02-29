#include"shell.h"
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
