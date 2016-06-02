#include "printf.h"

void	ft_assign(struct s_action pas)
{
	ft_strcpy(pas.flags, "#-0+ ");
	ft_strcpy(pas.conv, "sSpdDioOuUxXcC");
	ft_putstr("Assigned\n");
}
