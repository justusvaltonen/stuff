
#include	<stdio.h>

void	combo(int n);

void	combo(int n)
{
	int arr[n];
	int i = 0;
	int *p;
	int x = 1;
	int max = n - 1;
	int round = 0;
	p = &arr[i];

	while(round < 35)
	{
		while(i < n)
		{
			if(round == 0)
				*(p + i) = i;
			putchar((*(p + i)) + 48);
			i++;
		}
		putchar(',');
		putchar(' ');
		if(*(p + max) < 9)
			*(p + max) += 1;
		else if(*(p + max) == 9)
		{
			if(*(p + max - x) + 1 < 9)
				*(p + max) = *(p + max - x) + 1;
		}
		else //not the best possible way
		{
			*(p + max - x) += 1;
			*(p + max) = *(p + n - 1 - x) + 1;
		}
		i = 0;
		round++;
	}
}

int	main()
{
	int n = 4;
	combo(n);
	return(0);
}

/*
 *Thinking hurts brain. This approach is wrong. Also very much in the make
 still.
 */
