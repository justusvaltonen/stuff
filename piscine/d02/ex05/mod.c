
#include	"stdio.h" //instead of <> we can also use ""

int	main()
{
	int a = (-3) % 2;	//remove () if you want. Makes no difference.
	int b = (-3) % -2;
	int c = -1 % 3;
	int d = 7 % -2;

	printf("%d %d %d %d\n", a, b, c, d); //inside printf string, % is not modulo.
	return(0);
}
