
#include	<unistd.h>

void	ft_putchar(char x);

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar((i / 10) + 48);
			ft_putchar((i % 10) + 48);
			ft_putchar(' ');
			ft_putchar((j / 10) + 48);
			ft_putchar((j % 10) + 48);
			if (i != 98 || j != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
	}
}

int	main()
{
	ft_print_comb2();
	return(0);
}
/*
 *This doesn't look like my handwriting and propably isn't. This assignment is
 great practice for the upcoming ones. Everything besides the stuff inside 
 while (j <= 99) should be clear.
 	If we use the normal int, it can't have decimals. Rounding is done.
Unlike in the normal world, rounding is done down. Example: 987 / 10 is 98, not 99.
982 / 10 is also 98. Why? I don't know yet. Maybe it is easier to be used
in for example putchar. (i / 10) + 48 therefore gives the 
first number of the 2-digit number.
	% in C is not a percent. It is what is called a modulo. In C, modulo is 
an operator like any other and should return 1 on success. Use of %:
8 % 4 == 0; 8 % 3 == 2; 7 % 2 == 1; 13 % 4 == 1; 256 % 16 == 0;
Divide what is on the left side with what is on the right side. If the answer 
has decimals, round them down. What is the result of the dividence? Multiply 
that with what was originally on the right side. Minus that from what was on the
left side and there is your answer.. usually. I think of modulo as a loothoarder.
It does something and gathers the scrap.
	Depending how you categorize the % in your brain, it can get a bit illogical.
The weirdness happens when you use negative values. I forgot how it worked so I have
to test it. Ok so only the left side matters. If it is negative, output is also engative.

	This means that if the i is 56. 56 % 10 is 6 hence the 6 is putcharred.
After the first 2 digits have been printed, we print an empty space and repeat with
The second 2 digit number. Badabing, badabum. This would have taken a while to 
figure out without ctrl + c, ctrl + v. Sometimes it's neccessary to use 
ctrl + shift + (c || v).
 */
