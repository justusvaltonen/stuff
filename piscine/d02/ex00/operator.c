
#include	<stdio.h>

int	main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;

	a = (3 == 2);
	b = (3 == 3);
	c = (1 > 3);
	d = (1 < 3);

	char arr[] = "abcdefghij";
	int i = 0;
	while(i < 4)
	{
		putchar(arr[i]);
		i++;
	}
	putchar('\n');
	putchar(a + '0');
	putchar('\n');
	putchar(b + '0');
	putchar('\n');
	putchar(c + '0');
	putchar('\n');
	putchar(d + '0');
	putchar('\n');

	return(0);
}

//out of time
