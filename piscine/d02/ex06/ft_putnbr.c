
#include	<stdio.h>

void	ft_putnbr(int nb);
int	fpc(char x);

int	fpc(char x)
{
	return(write(1, &x, 1));
}

void	ft_putnbr(int nb)
{
	int s = sizeof(size_t);
	
	unsigned int c = 256 ^ (s - 1); //doesn't work, have to make it yourself.
	
	/*
	 * We know that the signed int range is - to +.
	 * int is signed by default.
	 * The cap on the negative side is 1 further away from 0.
	 * sizeof(size_t) gives unsigned value: always positive.
	 * All possible int values have to be printable.
	 *
	 * 1 bit = 0||1
	 * 2 bit = 01 || 10 || 11 || 00 == 0, 1, 2, 3
	 * 3 bit = 000, 001, 010, 011, 100, 101, 110, 111 == 0-7
	 * 4 bit = 0000, ...1111 == 0 - 15
	 *
	 * And because 0,1 has 2 states: 1 bit == 2 states (or solutions).
	 * 2 bit == 4
	 * 3 bit == 8
	 * 4 bit == 16
	 * 5 bit == 32
	 * ...8 == 256
	 *
	 * 1 byte = 8 bits.
	 * 2 byte = 1024 bits.
	 * 3 byte = 16777216 bits.
	 * 4 byte = 4294967296 bits.
	 * ...
	 * 8 byte = a shit load of bits.
	 *
	 * c needs to be divided to get the furthest away from 0 value.
	 * Function pow can't be used.
	 * Make a while loop and a counter. Make it stop at s -1 to make sure
	 * it fits. 
	 * Add one? Or not, head is not working.
	 * Multiply by 128 to get the max negative.
	 * Drink more coffee.
	 * Declare an int. Assign a value 1 to be able to -=.
	 * Compare int and unsigned int for cheatcode. Signed int transforms.
	 * This only if value of unsigned can't be passed to signed.
	 * Pray that compiler still has the feature and doesn't give warnings.
	 * Find a way to transform back to int.
	 * -= and --; because negative can be 1 further away from 0.
	 * Use these values to limit the cases when run.
	 * Else give an error. No write can be used. Or just don't give an error
	 * Hmm.. predefined macros are allowed I think. Maybe error can be done.
	 * Find a way to fpc without recursion and other functions.
	 * Reverse nb and putchar it.
	 * Using unsigned int, overflow cases use modulo..
	 * Maybe the reverse is unneccessary, maybe we can just multiply by 10
	 * and use the behaviour to our advantage. Do it size_t times?
	 * No. Drink coffee and figure it out.
	 * Try to make the whole thing fit in 25 lines.
	 *
	 * If everything fails, stackoverflow, github, no-life people.
	 */


}

int	main()
{
	int in = 666666;
	ft_putnbr(in);
	return(0);
}
/*
 *Unfinished. Why is this supposed to be doable mid-day on your first day of coding?
 If someone explained in detail the answer, it still wouldn't be doable on the first date.
 */
