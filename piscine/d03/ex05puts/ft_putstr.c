
#include	<unistd.h>

void	ft_putstr(char *str);
int	ft_putchar(char x);

void	ft_putstr(char *str)
{
	int i = 0;
	while(str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_putchar(char x)
{
	return(write(1, &x, 1));
}

int	main()
{
	char *string = "haxor";
	ft_putstr(string);
	return(0);
}
