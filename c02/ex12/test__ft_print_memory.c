void	*ft_print_memory(void *addr, unsigned int size);


int main()
{
	char expl_1[60] = "Hi there\n My name is Khalid Benjelloun\n\t... How are you?";
	//char expl_2[50] = "Hello there my dears\t\tare you actually okay??";

	ft_print_memory(&expl_1[10], 30);
}
