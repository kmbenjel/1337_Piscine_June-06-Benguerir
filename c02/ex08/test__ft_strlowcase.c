#include <stdio.h>
char	*ft_strlowcase(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s\n", ft_strlowcase(argv[1]));
	}
}
