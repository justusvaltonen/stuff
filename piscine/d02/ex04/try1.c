
#include	<unistd.h>

int	fpc(char x);
void	try1(void);

int	fpc(char x)
{
	return(write(1, &x, 1));
}

void	try1(void)
{
	int a = '0';
	while(a <= '7' && fpc(a))
	{
		fpc(a + 1);
		fpc(a + 2);

		fpc(44);
		fpc(32);

		a++;
	}
}

int	main()
{
	try1();
	return(0);
}

/*
 *I know that I can put a function inside while.
 For example while(a<7 && fpc(a)) first checks if the first comparison applies.
 only if it applies, the second comparison is made. && means and.
 This is done to reduce the lines our code has. It makes the code harded to read, but
 what ever, Im eighteen, I do what I want. Also the norme doesn't forbid this.
 
 out of time, to be continued
 */
