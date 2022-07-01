#include <stdio.h>
#include <stdlib.h>
int	ft_sqrt(int nb);
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", ft_sqrt(atoi(av[1])));
	}
}
