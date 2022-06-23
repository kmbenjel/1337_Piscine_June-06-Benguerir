char	*ft_strcat(char *dest, char *src);
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		char s1[50];
		strcpy(s1, argv[1]);
		char s2[50];
		strcpy(s2, argv[1]);
		printf("strcat: %s\n", strcat(s1, argv[2]));
		printf("ft_strcat: %s\n", ft_strcat(s2, argv[2]));
	}
	return (0);
}
