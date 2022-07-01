#include <stdio.h>
int	ft_str_is_alpha(char *str);

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", ft_str_is_alpha(argv[1]));
	}
}
