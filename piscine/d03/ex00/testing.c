
#include	<stdio.h>

void	test(int *eger);

void	test(int *eger)
{
	*eger = 666;
}

int	main()
{
	int bb = 44;
	int *hs = &bb;

	printf("Before function: %d\n", bb);

	test(hs);
	printf("After function: %d\n", bb);

	return(0);
}

/*
 *test(int *eger); on the top is initialization of the function. Note:
 (int *eger) means the function takes int* as input. eger is a workname inside
 the function. If it were up to me, it would be typed int* eger instead.

 Inside the function content of pointer eger, (*eger), where the eger points to
is altered to 666.

Inside main: we make a integer called bb and put content 44 inside.
Then we make an int* (int pointer) called hs and make it point to where ever in
the computers memory bb is stored (&bb). & refers to the computers memoryslot.
Not to be mixed with && (and).

Inside functions every change made is local unless we use pointers. Example:
Inside main we would pass bb in a function x that takes an integer as input.
Function x would contain { bb = 11; }. Now the bb is changed inside x, but
not inside the main() function.

I like to think pointers as wormholes between functions. Can take you to places
that normally are inaccessable and as easy to understand.
 */
