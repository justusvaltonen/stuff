
#include	<stdio.h>	//putchar
#include	<unistd.h>	//fpc

int	fpc(int c);

int	main()
{
	char x = 'x';
	int y = 3;
	putchar(x);
	putchar('\n');
	putchar(y + 48);
	putchar('\n');
	
	fpc(x);
	fpc('\n');
	fpc(y + 48);
	fpc('\n');

	return(0);
}

int	fpc(int c)
{
	write(1, &c, 1);
	return(1);
}

/*
 *What we can see is that done like this, the output is the same for fpc and putchar.
 But.. what we can also see is that we need different libraries aktivated for them.

 Out of time. To be continued.
 */
