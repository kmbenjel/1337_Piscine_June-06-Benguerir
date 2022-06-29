#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr(int nb);

int main(int argc, char **argv) {
	if (argc > 1) {
		int test;

		test = atoi(argv[1]);
		ft_putnbr(test);
	}
}
