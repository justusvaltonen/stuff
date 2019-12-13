
#include	<unistd.h>	//for write or ft_putchar
#include	<stdio.h>	//for putchar (the original)

char	ft_putchar(char x);
void	ft_print_reverse_alphabet(void);

char	ft_putchar(char x)
{
	return(write(1, &x, 1));
}

void	ft_print_reverse_alphabet(void)
{
	char start = 'z';
	char a;
	while(start >= 'a')
	{
		a = ft_putchar(start);
		start--;
	}
	putchar(start);
	putchar(a + 48);
}
int	main()
{
	ft_print_reverse_alphabet();
	return(0);
}

/*To work, fpc(ft_putchar) needs to have a return. If we put void, the return statement doesn't happen.
 *Universially the return shouldn't be in the form char. It can be anything you feel suitable. Just for demonstration we use char.
Hmm.. now that we putchar the contents of a, we can see that the return of write is 1. Can this mean that write returns 1 on success? I think so at least for now.
So what happens inside ftc? Before the return is executed, stuff inside () is executed. To be precise, stuff inside the inner (), then the outer ().
From the ASCII table we can see that the ascii 1 is start of heading. I don't know what it means. I don't want to put it inside a proper program before I find out, but since we are only fooling around, it could be used.
This is a great demonstration of a reason not to copy someone elses code if you don't understand what it does.
When you are a n00b its ok to copy and see what happens, test and find out.
Just don't put these things inside applications unless you studied first.
We can also see that now that start is less than 'a', it is something indeed.
It is the character `.
 */
