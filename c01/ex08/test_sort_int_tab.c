#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tab[] = {12, 67, 14, 13, 20, 15};
	int i;
	i = 0;
	while (i < 6)
	{
		printf("%d", tab[i]);
		if (i < 5)
			printf(", ");
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, 6);
	i = 0;
	printf("-------\n");
	while (i < 6)
	{
		printf("%d", tab[i]);
		if (i < 5)
			printf(", ");
		i++;
	}
	printf("\n");
}
