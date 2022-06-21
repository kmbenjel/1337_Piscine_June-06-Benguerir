#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int *i;
	int *j;

	int x = 9;
	int y = 4;

	i = &x;
	j = &y;

	ft_ultimate_div_mod(i, j);

	printf("x: %d\n", *i);
	printf("y: %d\n", *j);
}