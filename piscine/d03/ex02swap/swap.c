
#include	<stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int storage = *a;
	*a = *b;
	*b = storage;
}

int	main()
{
	int a = 1;
	int b = 2;
	int *pa = &a;
	int *pb = &b;
	printf("Before swap\na: %d\nb:%d\n", a, b);
	ft_swap(pa, pb);
	printf("After swap\na: %d\nb: %d\n", a, b);

	return(0);
}
