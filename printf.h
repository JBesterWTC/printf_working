#ifndef PRINTF_H
# define PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

struct	s_action {
	char	flags[4];
	int		flags2[5];
	char	conv[13];
	char	*result;
	int		count;
	int		count1;
	int		count2;
	int		check;
};

int		ft_printf(const char *format, ...);
int		ft_pass(va_list ap, const char *format);
char	*ft_flags(struct s_action pas, char fl);
int		ft_recog(struct s_action pas, va_list ap, char c);
void	ft_assign(struct s_action pas);
void	ft_checkfl2(struct s_action pas, const char *format);

#endif
