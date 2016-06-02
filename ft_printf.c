#include "printf.h"

int		ft_printf(const char *format, ...)
{
	va_list	ap;
	
	va_start(ap, format);
	while (*format)
	{
		while (*format != '%' && *format)
		{
			ft_putchar(*format);
			format++;
		}
		format++;
		ft_pass(ap, format);
		format++;
	}
	va_end(ap);
	exit(0);
	return (0);
}

int		ft_pass(va_list ap, const char *format)
{
	struct s_action	pas;

	ft_assign(pas);
	while (*format)
	{
		while (pas.flags)
		{
			if (*format == pas.flags[pas.count]);
				pas.result[0] = pas.flags[pas.count];
			pas.count++;
		}
		format++;
		ft_checkfl2(pas, format);
		if (pas.check != 1)
			format++;
		while (pas.conv)
		{
			if (*format == pas.conv[pas.count2])
			{
				if (pas.check != 1)
					pas.result[2] = pas.conv[pas.count2];
				else if (pas.check == 1)
					pas.result[3] = pas.conv[pas.count2];
			}
			pas.count2++;
		}
	}
	ft_putstr(pas.result);
	return (0);
}
