#include "ft_strcapitalize.c"
#include <stdio.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s\n", ft_strcapitalize(av[1]));
	}
}
