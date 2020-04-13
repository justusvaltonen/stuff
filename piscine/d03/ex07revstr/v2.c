#include	<stdio.h>
#include	<unistd.h>

void	ftp(char x);
char	*reverse(char *str);

void	ftp(char x)
{
	write(1, &x, 1);
}

char	*reverse(char *str)
{
	int i = 0;
	int count = 0;

	while(str[count] != '\0')
		count++;
	printf("Value in counter is: %i\n", count); //10
	char temp[count];
	//Mistake here is that we try to make an array of size 10.
	//There are 10 chars in illuminati. No room for null.
	
	count--;
	//If we don't -- then we would start copying from the null pointer of
	//the correctly assigned string str. Now we start copying from 'i'.
	
	while(count >= 0)
	{
		temp[i] = str[count];
		i++;
		count--;
	}
	/*
	 *One char at a time, we copy the string. Works as follows, temps it:h
	 memoryslots content, starting from the beginning of temp becomes strs
	 count:th memoryslots content, counting from the start of str.
	 */

	puts("------\n");
	count++;
	//Just so count is not negative.
	//temp[i] = 0;	
	//To disable accessing outside temp, remove the // from above
	while((temp[count] != '\0') && (count < 13))
	{
		ftp(temp[count]);
		puts("");
		ftp(count + 48);
		puts("");
		count++;
	}
	puts("\n---------");
	//This one to test if the null is automatically added
	//As we can see, it's not.
	//Also we can see that we can read from outside temp if no NULL is added
	
	printf("This is temp: %s\n", temp);
	printf("This is str: %s\n", str);
	puts("-------");
	return(str);
	/*
	 *If we try to return temp that has the string reversed, the compiler
	 gives us a warning. This doesn't happen because of the null missing but
	 because the string temp is only existent when we are in the current
	 function. After the return statement is executed, all of the memory
	 in our function can be freely used by the computer.
	 Example: We call another function in main that stores other info and
	 exits. After that, we try to use the info we returned from this
	 function without running this function, the info can be the info of
	 the other function. However if we allocate manually the size of our
	 string starting from the memoryslot of temp[0], the memory is not
	 rewritten... More of this in later assignments.
	 */
}

int	main()
{
	char *sp;
	sp = "Illuminati";
	printf("%s confirmed!\n", sp);
	sp = reverse(sp);
	printf("%s\n", sp);
	return(0);
}

/*
 *For a reason unknown for now, if we try to change the content of a string
 that is not assigned to an array variable, the computer says no. First we need
 to make an array, assign a pointer to it and then change the content of the
 array trough the pointer. Example on ./examples/nono.c.
 */
