
#include	<unistd.h>

void	ft_print_comb2(void);
int	ft_putchar(char x);

int	ft_putchar(char x)
{
	return(write(1, &x, 1));
}

void	ft_print_comb2(void)
{
	int i;
	int i2;

	i = '0';
	i2 = '0';

	while(i2 < '9' + 1)

}

int	main()
{
	ft_print_comb2();
	return(0);
}

/*
 *Very much in the make. I'm thinking about arraying this or just banging my head
  against the wall. Github copy is also an option. At least I can explain it.
 */
