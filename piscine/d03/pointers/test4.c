
#include	<stdio.h>

void	one(int *in);

void	one(int *in)
{
	printf("Address of in: %p\n", &in);
}

int 	main()
{
	int x = 3;
	int *m_px = &x;

	printf("MA of x: %p\n", &x);
	printf("MA of where the pointer is pointing aka x: %p\n", *&m_px);
	printf("Address of pointer to x: %p\n", &m_px);
	puts("--------------");

	one(m_px);

	return(0);
}

/*
 *Here we can see that the pointer itself is not passed to the fuction, but a 
 copy of it instead. This explains the previous behaviour.
 */
