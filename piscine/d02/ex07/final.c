
#include	<stdio.h>

void	comb(int n);
void	out(int n, int *p);
void	change(int n, int *p);
int 	endcon(int n, int *p);

int	endcon(int n, int *p) //DD
{
	int i;
	int end = 0;
	for(i = 0; i < n; i++)
	{
		if(*(p + i) == 10 - n + i)
			end++;
	}
	if(n - end == 0)
		return(666);
	return(1);
} //DD

void	out(int n, int *p) //EE
{
	int i;
	for(i = 0; i < n; i++)
		putchar(*(p + i) + 48);
	if(endcon(n, p) == 1)
	{
		putchar(',');
		putchar(' ');
	}
} //EE

void	change(int n, int *p) //FF
{
	int i;
	int cond = 0;
	for(i = 0; i < n; i++)
	{
		if(*(p + i) >= 10 - n + i)
		{
			*(p + i - 1 + cond) += 1;
			*(p + i) = *(p + i - 1) + 1;
			cond++;
		}
		else if(i == n - 1)
			*(p + n - 1) += 1;
	}
} //FF

void	comb(int n)
{
	int arr[n]; //AA
	int *p = &arr[0]; //AA
	int i = 0; //AA
	int combos = 0; //BB
	for(i = 0; i < n; i++) //CC
		*(p + i) = i; //CC
	while(endcon(n, p) == 1) //DD
	{
		out(n, p); //EE
		change(n, p); //FF
		combos++; //BB
	}
	out(n, p); //EE
	combos++; //BB
	printf("\nCombinations with %d digits: %d\n", n, combos); //BB
}

int	main()
{
	int in = 9;
	comb(in);
	return(0);
}

