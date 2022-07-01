#include <stdio.h>
#include <stdlib.h>
char	*ft_strupcase(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s\n", ft_strupcase(argv[1]));
	}
}
