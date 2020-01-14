
#include	<stdio.h>

void	ehh(int ****pppp);

void	ehh(int ****pppp)
{
	****pppp = 42;
}

int	main()
{
	int in_the_beginning;

	int *one;
	int **two;
	int ***three;
	int ****four;
	one = &in_the_beginning;
	two = &one;
	three = &two;
	four = &three;

	ehh(four);
	printf("Should work: %d\n", in_the_beginning);

	return(0);
}

/*
 *Everything points to the same place that is the integer called in_the_beginning
 We can't skip the stars. Because pointers point to the same memory slot, only
 one & is needed when referencing to a pointer. There could be a lot of testing
 to be done. The whole point :D of pointers is to access things between
 functions. What if we make a pointer to a function instead of a function that
 takes a pointer as input? Would this work? Because I promised myself to keep
 it simple, I'm coming back to this later on.
 */
