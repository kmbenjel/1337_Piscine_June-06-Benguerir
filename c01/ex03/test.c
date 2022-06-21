#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);
int	main(void)
{
	int	*div;
	int	*mod;
	int	a;
	int	b;
	int x= 100;
	int y = 11;

	div = &x;
	mod = &y;
	a = 10;
	b = 6;
	ft_div_mod(a, b, div, mod);
	printf("Result: %d, Remainder: %d", *div, *mod);
	return (0);
}
