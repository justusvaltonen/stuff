
#include	<unistd.h>

int	ft_putchar(char c);
void	ft_putnmbr(int nb);

int	ft_putchar(char c)
{
	return(write(1, &c, 1));
}

void	ft_putnmbr(int nb)
{
	unsigned reference = 0 - 1;
	int max_int = reference / 2;
	int min_int = (-max_int - 1);
	int min_trigger = 0;

	if(nb == min_int)
	{
		min_trigger++;
		nb++;
	}

	if(nb < 0 && nb > min_int)
	{
		ft_putchar('-');
		nb *= -1;
	}

	if(nb <= max_int)
	{
		if(nb >= 10)
			ft_putnmbr(nb / 10);
		ft_putchar(nb % 10 + 48 + min_trigger);
	}
}

int	main()
{
	int in = 0;
	ft_putnmbr(in);
	return(0);
}
