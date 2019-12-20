
#include	<stdio.h>

int	main()
{
	int i;
	puts("Give an int: ");
	scanf("%d", &i);
	printf("\ninside the int: %d\n", i);

	int predef = 12345/*6789123456*/;
	long int big = 12345678912;

	printf("Another int: %d\n", predef);
	printf("Long int: %ld\n", big);

	double d = 1234567891234567891;
	printf("Double int: %f\n", d);

	unsigned u = 1234567891/*23*/;	//here is the limit
	printf("Unsigned int: %d\n", u);

	return(0);
}
