
#include	<stdio.h>

void	one(int *a);
void	two(int *b);
void	three(int *c);
void	four(int *d);

void	one(int *a)
{
	two(a);
}

void	two(int *b)
{
	three(b);
}

void	three(int *c)
{
	four(c);
}

void	four(int *d)
{
	*d = 53;	//here we change the content of where the pointers
	//point to
}

int	main()
{
	int mi = 3;
	int *mp = &mi;
	printf("At first the value of mi is: %d\n", mi);

	one(mp);
	printf("After process the value is: %d\n", mi);

	return(0);
}
