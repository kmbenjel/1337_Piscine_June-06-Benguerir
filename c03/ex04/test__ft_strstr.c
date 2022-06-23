char	*ft_strstr(char *str, char *to_find);

#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("strstr: %s\n", strstr(argv[1], argv[2]));
		printf("ft_strstr: %s\n", ft_strstr(argv[1], argv[2]));
	}
}
