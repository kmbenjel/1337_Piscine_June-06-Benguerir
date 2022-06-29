#include <stdio.h>
#include <stdlib.h>
int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("FT_ATOI: %d\n", ft_atoi(argv[1]));
		printf("REAL_ATOI: %d\n", atoi(argv[1]));
	}
}
