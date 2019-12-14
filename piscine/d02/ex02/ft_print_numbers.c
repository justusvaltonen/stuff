
#include	<stdio.h>	//for putchar

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int x = 0;
	while(x <= 9)
	{
		putchar(x + 48);
		x++;
	}
}

int	main()
{
	ft_print_numbers();
	putchar('\n');
	return(0);
}

/*
 *What can we say about this one? I don't have a lot. This one seemed easy.
 The only thing I can add is stuff about the putchar. Try to type man putchar in the shell.
 It returns an int as we speculated in the last assignment. It also takes an int as a parameter.
 Hmm.. why doesn't the compiler complain even tho we give it a char?
 */
