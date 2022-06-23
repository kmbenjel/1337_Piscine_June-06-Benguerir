#include <stdio.h>
#include <string.h>
int	ft_strcmp(char *s1, char *s2);
int	main(int argc, char **argv)
{
	if (argc != 3)
		printf("Please give two args\n");
	else {
		int diff_ft;
		int diff;
		diff_ft = ft_strcmp(argv[1], argv[2]);
		diff = strcmp(argv[1], argv[2]);
		printf("ft_strcmp return: %d\n", diff_ft);
		printf("strcmp return: %d\n", diff);
	}
}
