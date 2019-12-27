
#include	<stdio.h>

int	main()
{
	int a;
	int b;
	int c;

	a = 4 % 3;
	printf("4 modulo 3 is: %d\n", a);
	//b = 0; //no commenting needed. 0 means the same as nothing.
	c = (b == (6 % 3));
	//c is "b that has no value is equal to 6%3 (0)?"
	//nothing is equal to 0 so the comparison is true.
	//true is 1 and untrue is 0 so c is 1.

	printf("Comparison returns 1 on success: %d\n", c);
	
	if(4 % 3)
	{
		c = 666;
	}
	printf("Should be demonic: %d\n", c);
	if(4 % 3)
	{
		c = 555;
	}
	printf("Content of c: %d\n", c);
	//Because 4 % 3 can be executed, the if stands.
	//Now we can see that the condition check is not neccessarily based
	//on the return value, or that it works a bit different than true/false
	
	if(c = 4, a = 5, c == 3)
	{
		printf("Should work if 3 is changed to 4.\n");
	}
	printf("Content of c: %d\nContent of a: %d\n", c, a);
	/*
	 *You can chain commands inside the if check.
	 The comparison of c and 3 is done last and since it fails, the "content
	 of.. is not printed.
	 */

	return(0);
}
