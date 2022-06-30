void	ft_print_combn(int n);

#include <stdlib.h>
#include <unistd.h>
int	main(int ac, char **av)
{
	if (ac == 2 && atoi(av[1]) < 10 && atoi(av[1]) > 0)
	{
		ft_print_combn(atoi(av[1]));
	}
	else
		write(1, "Error", 5);
}
