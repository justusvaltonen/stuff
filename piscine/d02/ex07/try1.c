
#include	<stdio.h>

void	comb(int n);

void	comb(int n)
{
	int *p;
	int arr[n];
	int a = 1;
	p = &arr[0];
	int i = 0;
	int cond = 0;
	while(i < n)
	{
		*(p+i) = i;
		i++;
	}
	i = 0;
	while(cond < 50)
	{
		if(*(p + n - 1) >= 10)
			*(p + n - 1) = *(p + n - a) + 1;
		while(*(p + n - 1) < 10)
		{
			for(i = 0; i < n; i++)
				putchar(*(p + i) + 48);
			putchar(',');
			putchar(' ');
			*(p + n - 1) += 1;
		}
		printf("a: %d\n", a);
		while(*(p + n - a) >= (10 - a))
			a++;
		*(p + n - a) += 1;
		a--;
		*(p + n - a) = *(p + n - a - 1) + 1;
		printf("a: %d\n", a);
		cond++;
	}
}

int	main()
{
	int n = 6;
	comb(n);
	return(0);
}
/*
 *Better but no. With input as 4 and cond as 50. When compiled and run, 
 when a becomes 3 there is a problem.
 5 and 50: every time a = 3 and 4. Just before print, check a. If a > 2, do a 
 check, problems should lay there.
 */
