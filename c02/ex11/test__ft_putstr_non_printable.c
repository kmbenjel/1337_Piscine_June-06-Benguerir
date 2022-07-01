#include <stdio.h>
void	ft_putstr_non_printable(char *str);
int	main(void)
{
	char	str[] = "Coucou\ntu vas \tbien?";

	ft_putstr_non_printable(str);
	printf("\n");

	return (0);
}
