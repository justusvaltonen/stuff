
#include	<stdio.h>

void	divide(int a, int b, int *div, int *mod);

void	divide(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main()
{
	int divide_this = 33;
	int with_this = -10;
	int div_res = 1;
	int mod_res = 1;
	int *div = &div_res;
	int *mod = &mod_res;

	printf("Before funk\n%d\n%d\n", div_res, mod_res);
	divide(divide_this, with_this, div, mod);

	printf("After:\n%d\n%d\n", div_res, mod_res);

	return(0);
}
/*
 *As stated before, dividing in c works a bit funny. Rounding down is forever
 present. Also modulo is working a bit illogically to my understanding. If 
 you take the modulo of a negative number, the result is always negative.
 I haven't tested yet if this goes for too big numbers also. Modulo is the
 remainder afted a division. 7 % 2 is 1 because 2 goes in to 7 3 times and
 the remainder is 1. 2 % 7 is 7 because 7 goes in to 2 0 times and remainder is
 7. -7 % 2 is -1 because it just is. -7 % -2 is also -1.

 41 / 10 is 4. 49 / 10 is also 4.
 */
