
#include	<stdio.h>
#include	<unistd.h>

int	main()
{
	char x = 'i';
	char str[] = "abc";
	write(1, str, 2);
	putchar('\n');
	write(1, &x, 1);
	putchar('\n');
	write(1, "13 characters", 13);
	putchar('\n');
	puts("1 char using write:");
	write(1, "a", 1);
	putchar('\n');
	return(0);
}
