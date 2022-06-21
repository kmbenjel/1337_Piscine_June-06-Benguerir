#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int tab[] = {65, 7, 10, 8};
	int i;
	i = 0;
	while (i < 4)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, 4);
	i = 0;
	while (i < 4)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}