char	*ft_strncat(char *dest, char *src, unsigned int nb);
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
		char s1[50];
		char s2[50];

	if (argc == 4)
	{
		strcpy(s1, argv[1]);
		strcpy(s2, argv[1]);
		printf("strcat: %s\n", strncat(s1, argv[2], atoi(argv[3])));
		printf("ft_strcat: %s\n", ft_strncat(s2, argv[2], atoi(argv[3])));
	}
	return (0);
}
