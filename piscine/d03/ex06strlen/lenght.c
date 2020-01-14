
#include	<unistd.h>

int	lenght(char *str);
int	fpc(char x);

int	fpc(char x)
{
	return(write(1, &x, 1));
}

int	lenght(char *str)
{
	int i = 0;
	while(*str != 0)
	{
		*str++;
		i++;
	}
	return(i);
}

int	main()
{
	char *input = "four";
	int result = lenght(input);
	fpc(result + 48);
	return(0);
}
