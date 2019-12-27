
#include	<stdio.h>
#include	<unistd.h>

void	num(int	nb);
int	fpc(char x);

int	fpc(char x)
{
	return(write(1, &x, 1));
}

void	num(int	nb)
{
	unsigned max_unsigned = 0-1;
	//printf("Max unsigned: %u\n", max_unsigned);
	//Gives max unsigned since unsigned are always > 0, subtracting 1
	//gives the max positive value of unsigned
	
	int max_int = max_unsigned / 2;
	//printf("Max signed int: %d\n", max_int);
	//Divide by 2 to get the max int value. The range difference from
	//lowest to highest is the same for signed and unsigned.
	
	int min_int = (-max_int - 1);
	//printf("Min value for int: %d\n", min_int);
	//Get the minimum value for signed int by multiplying the high cap
	//with -1. After that subtract 1 because on the negative side int
	//can be 1 further away from 0.

	//printf("Lets see if max int is ok: %d\n", max_int);
	//Just to see that it's still there
	
	//printf("Lets see nb: %d\n", nb);
	
	int bol = (nb <= max_int);
	//printf("boolean: %d\n", bol);

	bol = (nb >= min_int);
	//printf("boolean: %d\n", bol);
	//Still there. Problem arises when nb == min_int
	
	int min_trigger = 0;
	//to trigger when nb == min_int
	
	if(nb == min_int)
	{
		min_trigger++;
		nb++;
	}
	//Because we can't multiply min_int with - since max int is 1 closer to
	//0, we have to make a funny little trigger that triggers only on the
	//last time we recursively run the function. While inside a function,
	//all variables are local. This means when we re-run function num,
	//the triggers value doesn't carry on to the n:th recursion, but only
	//stays inside the run that it was triggered in. We also have to
	//add 1 to nb to be able to process the positive side range cap that
	//is 1 smaller than the negative.

	if((nb < 0) && (nb > min_int))
	{
		fpc('-');
		nb = nb * -1;
	}
	//This is done if nb is negative. Fpc the - sign and change nb to
	//positive. - * - is + as we remember from math class.

	if(nb <= max_int && nb >= min_int)
	{
		if(nb >= 10)
			num(nb / 10);
		fpc(nb % 10 + 48 + min_trigger);
	}
	//Since we wan't to print only 1 char at a time, we need to do a
	//division. We recursively divide the nb by 10 until it's small
	//enough to fit in 1 digit. The question is why do we need to use
	//the modulo (%)? This remains a mystery to me. The trick was shown to
	//me by someone in the bootcamp. If we don't use it, the output is
	//something unexpected. We set the min_trigger to 0 on every loop
	//round except the first one that prints out the last digit so no 
	//adding is done elswhere. 48 is the same as '0'. Since we are giving
	//fpc ints, they must be converted.
}

int	main()
{
	int x = 2147483647;
	num(45674891231321);
	return(0);
}
/*
 *Understand difference between runtime, preprocess. If the int range is
 calculated on runtime, it should be a good value. If it's calculated on compile
 it's not. Definetley not good if calc is done during preprocess if even
 possible.

 If I compile on my computer and you run the program on yours, there might be
 errors because system differences unless we are careful.

 It should be safe to assume that 1 byte is 8 bits. This is because of some
 standard that is being used. 4 bit bytes exist but they are called nibbles.
 8 bit bytes are also called octets. This is very confusing, but let's hope
 it gets easier. This has absolutely nothing to do with the answer I'm giving
 since I'm not using sizeof.
 */
