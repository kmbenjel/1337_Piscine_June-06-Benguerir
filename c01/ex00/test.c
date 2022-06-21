#include <stdio.h>
void	ft_ft(int *nbr);

int	main(void)
{
	int *nbr;

	int a = 5;
	nbr = &a;

	ft_ft(nbr);
	printf("%d\n", *nbr);
}