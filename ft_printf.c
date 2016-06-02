#include "printf.h"

int		ft_printf(const char *format, ...)
{
	va_list	ap;
	int		*pos;
	
	pos = 0;
	va_start(ap, format);
	while (*format)
	{
		while (*format != '%' && *format)
		{
			ft_putchar(*format);
			format++;
			pos++;
		}
		format++;
		pos++;
		ft_pass(ap, format);
		format++;
		pos++;
	}
	va_end(ap);
	exit(0);
	return (0);
}

int		ft_pass(va_list ap, const char *format, int *pos)
{
	struct s_action	pas;
	int				i;

	i = *pos;
	ft_assign(pas);
	ft_putstr("Passed\n");
	pas.count = 0;
	pas.count1 = 0;
	pas.count2 = 0;
	while (*format)
	{
		ft_putstr("Entered\n");
		while (pas.flags[pas.count] != '\0')
		{
			if (*format == pas.flags[pas.count])
				pas.result[0] = pas.flags[pas.count];
			ft_putstr("No error 1\n");
			pas.count++;
		}
		format++;
		ft_putstr("Reached\n");
		ft_checkfl2(pas, format);
		if (pas.check != 1)
			format++;
		while (pas.conv[pas.count2] != '\0')
		{
			if (*format == pas.conv[pas.count2])
			{
				if (pas.check != 1)
					pas.result[2] = pas.conv[pas.count2];
				else if (pas.check == 1)
					pas.result[3] = pas.conv[pas.count2];
			}
			ft_putstr("No error 2\n");
			pas.count2++;
		}
		format++;
	}
	ft_putstr(pas.result);
	return (0);
}
