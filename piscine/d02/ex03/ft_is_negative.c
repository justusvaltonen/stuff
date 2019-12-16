
#include	<unistd.h>

int	fpc(char x);
void	ft_is_negative(int n);
void	testFUNK(char plane);

int	fpc(char x)
{
	return(write(1, &x, 1));
}

void	testFUNK(char plane)
{
	fpc(plane);
	//fpc(aero);	doesn't work
}

void	ft_is_negative(int n)
{
	if(n < 0)
		fpc('N');
	else
		fpc('P');
}

int	main()
{
	char aero = 'R';
	ft_is_negative(3);
	fpc('\n');
	testFUNK(aero);
	//testfunk(aero);	does not compile
	fpc('\n');
	return(0);
}
/*
 *Things to make note of:
 In the main function we name a char variable aero and put the char R inside.
 The name aero works only inside the main. It is what is called a local variable.
 We pass the variables content to the function testFUNK. Because we prototyped testFUNK to work with a local variable called plane, somewhere on the way inside
 to the testFUNK the name changes.
 What actually happens here is still a mystery to me but will be discovered somewhere in the future.
 Also uppercase matters. Still, don't use uppercase if it can be avoided.
 */
