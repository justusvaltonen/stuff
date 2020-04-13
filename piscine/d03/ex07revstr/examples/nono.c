
#include	<stdio.h>

int	main()
{
	char *beer = "corona";
	char fruit[] = "apple";
	char *point;
	point = &fruit[0];
	printf("%s\n", fruit);
	point[2] = 't';
	printf("%s\n", point);
	printf("%s\n", beer);

	fruit[2] = 'q'; //this is ok
	printf("%s\n", fruit);
	//beer[2] = 'q'; //not ok

	return(0);
}

