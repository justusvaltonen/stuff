
#include	<unistd.h>
#define ft_putchar fpc

int	fpc(char x);
void	try1(void);

int	fpc(char x)
{
	return(write(1, &x, 1));
}

void	try1(void)
{
	int a = '0';
	int i = 1;
	int i2 = 2;
	int c = 0;

	while(a <= '7' && fpc(a))
	{
		if(fpc(a + i) && fpc(a + i2))
		{
			fpc(44);
			fpc(32);
		}
		if(((++i2) == 10) && (i2 = c + 3) && (i++ == 8)) 
		//if(((++i2 /*+ c*/) == 10) && (i2 = (i + 2)) && (i++ == 8))
		{
			a++;
			c++;
			i = 1;
			i2 = i + 1;
		}
	}//use and or combo
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
 
 A little about macros. There is a possibility to replace every string of text with another.
 While normally macros are typed in capital letters, this time for the sake of demonstration 
 we use lower case letters. Lets pretend that we forgot to use ft_putchar and
 we used fpc instead as the name for our function. Because programmers are a lazy buch,
 they do anything to avoid excess typing. We can use a macro for this.
 On the second line of our file we use the command #define to define what we want
 to replace with what we want to replace. Right now we replace every instance of
 fpc with ft_putchar. It is a good practise to name our in CAPITAL LETTERS.
 This means that instead of ft_putchar we should write FT_PUTCHAR.

 Aand.. it's wrong. It's the other way around. What comes right after the define
 is what we want to replace and what comes after is what we replace it with.
 Making silly mistakes is part of everyday life. Even god makes mistakes.
 That's why plattypusses exist.

 	Now back to the assignment again..
Something doesn't feel right here. According to my logic I should be making small
progress with my program, but the output is adding an extra loop somewhere with
a weird set of values. Let's check the ASCII to find out where the mistake is.
Right now I'm getting 019, 01:, 023. I seem to be blind to my own mistakes.
The value of ':' is 10 so finding the problem should be easy.

	After a couple of pints of coffee, I realized that ++i2 and i2++ are !
(not) the same thing. At first my if statement said: if(i2++ == 10..
What happens here is the following: the machine checks if i2 has the value 10
and afterwards adds 1 to i2. If we put ++i2 == 10, the machine first adds 1 to
i2 and then checks if the value matches to 10. I've seen jokes about this in the
ATK www.
	
	Im having great difficulties. I can only use 3 more lines to fit the norme
and there might be an exeption that needs to be added. I think I've spent like 5
hours now on this assignment. I think I might have only about 40 years on this planet
and there are still a lot of assignments. Also more coffee needs to be aquired.

	Insanity is creeping up on me. Now I can relate to people who do development jobs.
Every time I fix a problem, new one arises. This is silly. For sure this is not a hard one. The temptation to use duct tape is huge. I will not give up!
This assignment thinks it can beat me, but it's wrong.

	I don't know witch circuit this is supposed to be but the assignment looks like a very much machine level thing. Kind of strange that we can skip the
compiler all together and go straight to designing logic gate combos. A drawing
board could come in handy right now.

	Got it! Answer on another file.
 */
