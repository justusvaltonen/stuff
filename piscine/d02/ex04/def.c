
#include	<stdio.h>
#define	IKNOWKUNGFU putchar
#define	add(r) ((r) + 1)

int	main()
{
	IKNOWKUNGFU('c');
	IKNOWKUNGFU('\n');
	
	int one = 1;
	int result = add(one) + 1;
	
	IKNOWKUNGFU(result + 48);
	IKNOWKUNGFU('\n');

	int test = add(4);
	IKNOWKUNGFU(test + 48);
	IKNOWKUNGFU('\n');

	return(0);
}
/*
 *Im not sure if this is how it goes. When we use macros, they are calculaed and 
 interpreted before we start the program that is the result of our compilation.
 I like to think this like installing a game and then running it. When the game is 
 installed, it reduces the need for resources that need to be allocated depending on 
 our actions in the game. If we were to run it without installation, 
the game would experience serious lag. Again this might be totally wrong and one shouldn't take 
 my word for it. When we execute the ready program, the text that used to be
  our code is handled in a totally different format by the computer.

  	When we defined the add(r) ((r) + 1) we created a function without a type.
It takes a variable as a parameter. What ever the input is, it is incremented by 1.
This means 1 as in number 1. Let's test what happens if we put a number as the 
parameter instead of a variable. Wow it works. My eyes are opening to macros now.
The indians in the internet say that we shouldn't use macros that much. Where is
the downside? If it's true that performance increases with the cost of disc space, it doesn't seem that bad.
In the future assignments testing will get slow if we only use functions. Is C designed to be a quick tool for small stuff?
Is it all about power over the machine? Does it just look cool to write code that is
hard to understand? Maybe it's a good way to learn. Maybe it's designed for us dopamine junkies.
What Ive learned is that dopamine is higly addictive. It is released in our brain
when we anticipate a reward. When simple things are made hard and then accomplished,
a rush of good feeling is gained. C is addictive. More on this later on.
 */
