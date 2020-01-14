
#include	<stdio.h>

void	ft_ft(int *nbr);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int n;
	int *p = &n;
	ft_ft(p);
	printf("%d\n", n);
	return(0);
}
