
#include	<stdio.h>
#include	<unistd.h>

void	ft_ft(int *nbr);
void	fpc(char x);

void	fpc(char x)
{
	write(1, &x, 1);
}

void	ft_ft(int *nbr)
{
	*nbr = 3;
}

int	main()
{
	int in = 987;
	int *point;
	point = &in;
	ft_ft(point);
	printf("*point holds: %d", *point);
	printf("Lets see the memoryslot of *point: %p", point);
	printf("Lets see the memoryslot of in: %p", &in);
	fpc('\n');
	printf("Something random to test");

	return(0);
}

/*
 *Something weird happens and the fpc('\n') is executed before anything else.
 When I have more time, I'll investigate. Also to be noted that with a different
 compiler this doesn't manifest. Bugs with gcc, normal behaviour with clang.

 On the previous days assignment interweb says that when an integer goes "out of
 bounds", there should be unpredictable behaviour. This is not the case on my
 computer. I have a theory that this could be because I have defragged my hard
 drive. Lets pretend that the computers hard drive is a very big 2d string.
 If we assign an integer on a slot #3 and the slots #4-#99999999 are unassigned.

 Now when an integer goes out of bounds, the next free slot is used. We could 
 test this if we knew how to allocate something to the next slot after the
 already allocated integer. After this we go out of bounds with the integer and
 see what happens.

 Not knowing how a computer actually works, limits the understanding of how
 code works. Good thing that there are cheap classes on internet.
 */
