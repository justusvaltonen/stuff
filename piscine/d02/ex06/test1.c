
#include	<stdio.h>
//#include	<limits.h>
/*
 *Not sure if limits.h limits the range or enables the macros. Testing is done
 by commenting out the include and adding 1 to the max or decreasing 1 from the
 min. In this case, its a good thing to comment out the printf"The int range.."
 so we won't come across weird behaviour.
 */
void	reset(int *n, int *p);

void	reset(int *n, int *p)
{
	*n = -2147483648;
	*p = 2147483647;
}
//This file is to demonstrate the behaviour of signed ints
int	main()
{
	int minTest;
	int maxTest;

//	minTest = INT_MIN;
//	maxTest = INT_MAX;
	minTest = -2147483648;
	maxTest = 2147483647;

	int *n = &minTest;
	int *p = &maxTest;

	printf("The int range is between:\n%d\nand\n%d\n", minTest, maxTest);
	
	maxTest++;
	printf("Added 1 to the max. Output is:\n%d\n", maxTest);
	
	maxTest++;
	printf("Added 1 more:\n%d\n", maxTest);
	/*
	 *My computer just made it the bare minimum on the first add and added 1
	 to at the second add. This is weird since on my previous tests this 
	 didn't happen.
	 */
	maxTest += 666;
	printf("Added 666.\n%d\n", maxTest);
	//A bit too stabile to my liking.
	
	--minTest;
	printf("Subtracted 1 from minTest:\n%d\n", minTest);
	//A complete failure this test is so far. Lets do other stuff to break
	//the logic.
	
	reset(n, p);
	minTest *= 2;
	printf("Min times 2 is:\n%d\n", minTest); //gives 0

	reset(n, p);
	minTest *= 3;
	printf("Min times 3 is:\n%d\n", minTest);
	/*
	 *This gives the min int again. This can tell something about the
	 process of multiplying. Lets do the same with the positive.
	 Remember that we are dealing with signed int at this point.
	 */
	maxTest *= 2;
	printf("Max times 2:\n%d\n", maxTest);
	//gives -2
	reset(n, p);
	maxTest *= 3;
	printf("Max times 3:\n%d\n", maxTest);
	//gives 2147483645?? 2 less than the max.
	return(0);
}
/*
 *Ahaa! From here we can see what happens inside the computers brain!
 */
