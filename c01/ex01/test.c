#include <stdio.h>
void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int *********a;
	int ********b;
	int *******c;
	int ******d;
	int *****e;
	int ****f;
	int ***g;
	int **h;
	int *i;
	int j;

	j = 8;

	printf("Before: %d\n", j);

	i = &j;
	h = &i;
	g = &h;
	f = &g;
	e = &f;
	d = &e;
	c = &d;
	b = &c;
	a = &b;

	ft_ultimate_ft(a);
	printf("After: %d\n", j);
}
