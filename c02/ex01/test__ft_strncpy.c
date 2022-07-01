char	*ft_strncpy(char *dest, char *src, unsigned int n);
#include <stdio.h>
//#include <string.h>
int	main(void)
{
	char	k[4000]= "IAMHER";
	char	*src;

	src = "khalid";
	ft_strncpy(k, src, 5);
	printf("%s\n", k);
}
