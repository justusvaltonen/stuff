
#include	<stdio.h>

void	divmod(int *a, int *b);

void	divmod(int *a, int *b)
{
	int div = *a / *b;
	int mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main()
{
	int div = 11;
	int mod = 3;
	int *p_div = &div;
	int *p_mod = &mod;
	divmod(p_div, p_mod);
	printf("Div = %d\nMod = %d\n", div, mod);
	return(0);
}
