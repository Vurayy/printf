#include "main.h"

/**
 * _printf - Function that produces output according to a format
 * @format: Format specifier
 * Return: Number of bytes printed
 */
int _printf(const char *format, ...)
{
	unsigned int a, count = 0;

	va_list args;
	 if (!format || (format[0] == '%' && format[1] == '\0'))
                 return (-1);

	va_start(args, format);

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			vure_putchar(format[a]);
		}
		else if (format[a] == '%' && format[a + 1] == 'c')
		{
			vure_putchar(va_arg(args, int));
			a++;
		}
		else if (format[a] == '%' && format[a + 1] == 's')
		{
			count = putts(va_arg(args, char *));
			a++;
			count += (count - 1);
		}
		else if (format[a + 1] == '%')
		{
			vure_putchar('%');
		}		
		count += 1;
	}
	va_end(args);
	return (count);
}