--------------



void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	key;

	i = 1;
	while (i < size)
	{
		key = tab[i];
		j = i - 1;
		while (tab[j] > key)
		{
			ft_swap(&tab[j + 1], &tab[j]);
			j--;
		}
		i++;
	}
}




---------------
