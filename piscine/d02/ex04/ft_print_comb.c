
#include	<unistd.h>	//for fpc

int	fpc(char c);	//less work to type fpc than ft_putchar
void	ft_print_comb(void);	//the actual function
void	bunch(int q, int w, int e);	//not allowed but didn't care

int	fpc(char c)
{
	return(write(1, &c, 1));	//putchar returns an int so this does aswell
}

void	bunch(int q, int w, int e)	//to demonstrate that you can make your own functions if you want to repeat yourself often
{
	fpc(q);	//naming of these variables is very creative :D
	fpc(w);	//also to help understand what is going on inside functions
	fpc(e);
}

void	ft_print_comb(void)
{
	int a = '0';
	int b = '1';
	int c = '2';
	while(a <= '7')
	{
		while(b <= '8')
		{
			while(c <= '9')
			{
				bunch(a, b, c);
				c++;
				fpc(44);
				fpc(32);
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
	}
	a--;
	b--;
	c--;
	bunch(a, b, c);
	fpc('\n');
}

int	main()
{
	ft_print_comb();
	return(0);
}
