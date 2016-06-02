#include "printf.h"

void	ft_checkfl2(struct s_action pas, const char *format)
{
	pas.check = 0;
	while (!(pas.result[1]))
	{
		if (*format == 'h')
		{
			pas.result[1] = 'h';
			format++;
			if (*format == 'h')
			{
				pas.result[2] = 'h';
				pas.check = 1;
			}
		}
		else if (*format == 'l')
		{
			pas.result[1] = 'l';
			format++;
				if (*format == 'l')
			{
				pas.result[2] = 'l';
				pas.check = 1;
			}
		}
		else if (*format == 'j')
		{
			pas.result[1] = 'j';
		}
		else if (*format == 'z')
		{
			pas.result[1] = 'z';
		}
	}
	ft_putstr("No error 3\n");
}
