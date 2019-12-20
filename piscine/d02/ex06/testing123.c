
#include	<stdio.h>

int	main()
{
	int i;
	puts("Give an int: ");
	scanf("%d", &i);
	printf("\ninside the int: %d\n", i);

	int predef = 12345/*6789123456*/;
	long int big = 1234567891234567891;

	printf("Another int: %d\n", predef);
	printf("Long int: %ld\n", big);

	double d = 1234567891234567891;
	printf("Double int: %f\n", d);

	unsigned u = 1234567891/*23*/;	//here is the limit
	printf("Unsigned int: %d\n", u);

	int info = sizeof(size_t);
	printf("%d\n", info); //answer is 8

	long long int huge = 1234567891234567891/*2*/;
	printf("A big number: %lld\n", huge);

	return(0);
}
/*
 *By using the info in info (haha put recursion in your recursion) we can tell
 that 8. I can't fully explain what happens here because I don't know. All I
 know is that value range of int in my machine is:
 -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807. This seems to be the
 case for long int. Lets see what happens with long long int. No difference with
 it. Now to find out why is there a long long if it makes no difference.
 For now it seems that the maximum value range can be the same for both. Minimum
range is pre defined somehow. long long is guaranteed to be at least as big as 
long and long range is guaranteed to be at least as big as int.

	short int <= int <= long int <= long long int by range. If not defined
separatly, (long == long int) && (long long == long long int); Alalalala long,
alalalala long, alalala lolongli long long long.

	And back to the 8 (my system). This tells me that my system is 8 byte
something. 1 byte is 8 bits. 8 * 8 is 64 so my system is 64 bit something.
This tells me that "chhh..sadlkasdl memory.. chhs.. prosessor..chhsa..performance"
So not a lot. All I know is that 2 bits == 2^2, 4 bits == 2^4, 8 bits = 2^8.
How convenient. So my system is 256 something. And because we are future
programmers and keeping it simple is not in fashion, we start counting from 0.
1 byte with my current lineup can hold the values from 0-255? Should be true.
Seriously, you have to be autistic to come up with this "s..chha..t".

	Interweb tells a lot of things. Among those things is the story about 
system performance. Int should perform faster than long int even if the value
stored inside is the same. This goes a bit :D too deep for my current capability
of getting it, so I'll just continue with the subject later on.
 */
