#include <stdio.h>
#include <stdlib.h>
int	ft_fibonacci(int index);

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%d\n", ft_fibonacci(atoi(av[1])));
	}
}
