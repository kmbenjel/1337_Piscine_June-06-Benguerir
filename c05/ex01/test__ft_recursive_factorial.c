#include <stdio.h>
#include <stdlib.h>
int	ft_recursive_factorial(int nb);

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", ft_recursive_factorial(atoi(av[1])));
	}
}
