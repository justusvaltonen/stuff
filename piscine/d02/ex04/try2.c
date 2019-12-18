
#include	<unistd.h>

void	ft_print_comb(void);
int	ft_putchar(char x);

int	ft_putchar(char x)
{
	write(1, &x, 1);
	return(1);
}

void	ft_print_comb(void)
{
	int a;
	int i;
	int i2;
	int c;
	a = '0';
	i = 1;
	i2 = 2;
	c = 0;
	while(a <= '7' && ft_putchar(a) && ft_putchar(a + i) && ft_putchar(a + i2))
	{
		if(ft_putchar(44) && ft_putchar(32) && (a + i2) >= 57)
		{
			if((i2 = i + 1) && (a + i >= 56))
			{
				if(++a && ++c && (i = a - 48 - c))
				{
				}
			}
			i++;
			i2 = i;
		}
		i2++;
	}
}

int	main()
{
	ft_print_comb();
	return(0);
}

/*
 *First we make a. I made it in to an int but it doesn't matter. Personal preferences
 matter here. Could have been char also but then we would have to change the code
 a little bit. We define the max value to it to be 7 because we couldn't go past that.
 No combos starting with 8 could be legit. We can only use 25 lines because of the norme.
 That means we have to put our commands inside loops for example. Always start printing
 with the first digit, then the second and then the third. Output must also have
 , and " " to separate the combos. 44 is "," and 32 is " ".
 57 is 9. The implementation is a bit funny because every time we go "out of
  bounds" we go to an if statement. Inside the second if statement we change 
  the value of i2 and also check for out of bounds again.
  	The way it works is that the conditions are checked in a certain order.
if ft_putchar does something, the second condition (does ft_putchar do something)
is executed. Only after that the out of bounds condition is checked.
I will see what happens if I don't put a return value of 1 to ft_putchar.
Fudge, if we replace the return of 1 with a 0, nothing works. For sure I will not 
be redoing this one. What we can see is that condition checks are looking for 1 on success.
	Another tricky part was on the inner if. Note to self: ++c means add 1
 to c and after that do the rest. c++ does the rest and afterwards adds 1.
 This assignment was a long trial and error combo. At least I know more about c now.
 */
