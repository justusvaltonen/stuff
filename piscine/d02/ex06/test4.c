
#include	<stdio.h>
#include	<limits.h>

void	reset(unsigned int *point);

void	reset(unsigned int *point)
{
	*point = UINT_MAX;
}
int	main()
{
	unsigned int uint = 1002;
	//if we put 1002, we get funnier results than with 1000
	unsigned *p = &uint;
	
	while(uint > 100)
	{
		printf("Uint while > 100. *= 1000: %u\n", uint);
		uint *= 1000;
	}

	reset(p);
	printf("Uint after rest to max: %u\n", uint);
	uint++;
	printf("uint++: %u\n", uint);
	uint++;
	printf("Again: %u\n", uint);
	uint++;
	printf("Again: %u\n", uint);
	uint++;
	printf("Again: %u\n", uint);
	uint++;
	printf("Again: %u\n", uint);
	reset(p);
	printf("After reset: %u\n", uint);

	uint += 7;
	printf("Added 7 to uint_max: %u\n", uint);
//Not very helpful. Just keeps on looping from 0. Lets try with longlong.

	unsigned long long big = 4294967295;
	printf("uLonglong: %llu\n", big);
	big = sizeof(unsigned long long);
	printf("Big in bytes: %llu\n", big);

	big = 9223372036854775807;
	printf("Lets see if fits in longlong: %llu\n", big);
	big *= 2;
	printf("Big++: %llu\n", big);
	big *= 2;
	printf("Again multiply by 2: %llu\n", big);
	//Now the big is 2 smaller than last printf.
	big = 0;
	big--;
	printf("Big = 0-1: %llu\n", big);
	unsigned long long max = 0 - 1;
	printf("Max: %llu\n", max);
	big = max;

	big += 5;
	printf("big + 5: %llu\n", big);

	return(0);
}

/*
 *No time, study when you have the time.
 Not so weir after all. Forgot about the specifier in printf.
 These things work even tho we put %d instead of %u. They are converted.
 */
