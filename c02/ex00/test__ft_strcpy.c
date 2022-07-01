char	*ft_strcpy(char *dest, char *src);
#include <stdio.h>
int main() {
	char dest[] = "i";
	char src[] = "abcde";

	ft_strcpy(dest, src);
	printf("%s\n", dest);
}