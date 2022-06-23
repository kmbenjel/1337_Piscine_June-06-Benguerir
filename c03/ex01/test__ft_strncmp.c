#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	main(int argc, char **argv)
{
	if (argc != 4)
		printf("Please give three args\n");
	else
	{
		int diff_ft;
		int diff;
		diff_ft = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
		diff = strncmp(argv[1], argv[2], atoi(argv[3]));
		printf("ft_strncmp return: %d\n", diff_ft);
		printf("strncmp return: %d\n", diff);
	}
}
