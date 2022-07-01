unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char			*src;
	unsigned int	size;
	int				return_strlcpy;
	int				return_ft_strlcpy;
	char			dest1[50];
	char			dest2[50];

	dest1[0] = 0;
	dest2[0] = 0;
	src = argv[2];
	if (argc == 4)
	{
		size = atoi(argv[3]);
		//STRLCPY
		strcpy(dest1, argv[1]);
		return_strlcpy = strlcpy(dest1, src, size);
		printf("\nstrlcpy: %u\n", return_strlcpy);
		printf("%s\n", dest1);
		printf("--\n");
		//FR_STRLCPY
		strcpy(dest2, argv[1]);
		return_ft_strlcpy = ft_strlcpy(dest2, src, size);
		printf("ft_strlcpy: %u\n", return_ft_strlcpy);
		printf("%s\n\n", dest2);
	}
}
