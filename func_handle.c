#include "main.h"
/**
 * funcHandle - handle a function
 * @args: the argument of va_* function
 * @han: the input
 * Return: always 0
 */
int funcHandle(va_list args, char han)
{
	char *ptr, a;
	int b;

	switch (han)
	{
		case 'c':
			a = va_arg(args, int);
			return (pchar(a));
		case 's':
			ptr = va_arg(args, char *);
			if (ptr == NULL)
				ptr = "";
			return (write(1, ptr, strlen(ptr)));
		case '%':
			return (write(1, &han, 1));
		case 'd':
		case 'i':
			b = va_arg(args, int);
			return (pint(b));
		default:
			return (0);
	}
}
