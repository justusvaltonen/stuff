
#include	<stdio.h>

void	fuckery(int *ehh);

void	fuckery(int *ehh)
{
	printf("Content of ehh: %d\n", *ehh);

	printf("Ma of pointer ehh before: %p\n", &ehh);
	printf("MA of where ehh points to in main: %p\n", *&ehh);
	/*Gives the address of m_x. To get the address of pointer px from this 
	 * function should be hard because we are dealing with a copy of that 
	 * pointer. Maybe later we are able to tell if it's even possible.
	 * It is possible but if we don't know the structure of main it's just
	 * guessing. First comes chars, second ints and last pointers. Testing
	 * the values we get by jumping 1, 2 or 4 bytes gives an insight.
	 */
	puts("----------------\nNow some changes\n");

	(*&ehh)++;	//this works but *&ehh++ doesn't
	//What the difference between this and ehh++ is is still unclear.
	//We can also *ehh++ and it seems to give the same result.
	
	puts("Ehh++:");
	/*
	 What the content should be is unclear. 
	 */

	printf("Content of ehh after: %d\n", *ehh);
	//This seems to be random content. Should be dependent on what is
	//assigned on the MA 4 bytes after where ehh points to.
	
	printf("MA of pointer ehh after: %p\n", &ehh);
	printf("MA of where ehh points to in main after: %p\n", *&ehh);
	//This is the address of px in main. Seems logical since the next
	//declaration after declaring m_x is *px declaration.

	puts("---------------\nLet's ehh++ again\n");
	ehh++;
	printf("Content of ehh after: %d\n", *ehh);
	//Still weird, but different weird
	
	printf("MA of pointer ehh after: %p\n", &ehh);
	printf("MA of where ehh points to in main after: %p\n", *&ehh);
	/*
	 *We can see that before the second incrementation we get the MA of
	 px pointer in main. After the second incrementation we get the 4 bytes
	 after it. We know that ints take 4 bytes. We haven't declared anything
	 in main after the *px declaration so we don't know where this points
	 to.

	 Lets test if the pointers are assigned to memory in a spesific area:
	 assign char and do some other tests!!!!
	 */
}


int	main()
{
	int m_x = 4;
	int *px = &m_x;

	printf("\nContent of int m_x: %d\n", m_x);
	printf("MA of m_x: %p\n", &m_x);
	printf("MA where px points to: %p\n", *&px);
	printf("Content of where px points to: %d\n", *px);
	printf("MA of px: %p\n", &px);
	puts("-----------------");

	fuckery(px);
	puts("-----------------");
	puts("After fuckery:");
	printf("Content of int m_x: %d\n", m_x);
	printf("MA of m_x: %p\n", &m_x);
	printf("MA where px points to: %p\n", *&px);
	printf("Content of where px points to: %d\n", *px);
	printf("MA of px: %p\n", &px);

	printf("MA of fuckery: %p\n", &fuckery);

	return(0);
}
