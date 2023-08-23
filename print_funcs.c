#include "main.h"
/**
 * _printf - rints everythig
 * @format: an input string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int k = 0, j = 0, i;

	if (format == NULL)
	{
		va_end(args);
		return (-1);
	}
	va_start(args, format);

	while (format[k])
	{
		if (format[k] == '\0')
			break;

		else if (format[k] == '%')
		{
			k++;
			i = funcHandle(args, format[k]);
			if (i == 0)
			{
				pchar('%');
				pchar(format[k]);
				i = 1;
			}
			j += i;
		}
		else
		{
			pchar(format[k]);
			j++;
		}
	k++;

	}

	va_end(args);
	return (j);
}
