
#include	<stdio.h>

char	*rev(char *str);

char	*rev(char *str)
{
	int i = 0;
	int len = 0;

	while(str[len] != '\0')
	{
		len++;
	}
	printf("Lenght of abcdef: %d\n", len);
	char temp[len + 1];
	len--;
	while(len >= 0)
	{
		temp[i] = str[len];
		i++;
		len--;
	}
	temp[i] = 0;
	printf("i == %d\n", i);
	i = 0;
	printf("Content of str: %s\n", str);
	printf("Content of temp: %s\n", temp);

	printf("Lets see if we can get temp again:\n%s\n", temp);

	while(temp[i] != 0)
	{
		printf("temp[i]: %c\n", temp[i]);
		str[i] = temp[i]; //This line doesn't execute.
		printf("i == %d\n", i);
		i++;
	}


	return(str);
}
/*
 *The problem here seems to be not in the rev function but in the way main is 
 done. My compiler compiles the program but when executed, it gives an error
 message saying something about a boundary error. If we don't declare the string
 or array in main and use a pointer to that array as input, this happens.
 I tried to use elevated privilages to see if I could make this problem
 disappear. I failed. This has something to do with how the memory works. The
 reason is that if we declare the string with "char *your_name_here = "lalaa";",
 the string becomes read only. The only way to declare a string that I know to
 be able to write to is to use [] brackets. Example: char your_name_here[] = 
 "lalaa";
 */

int	main()
{
	char *in;
	in = "abcdef";
	printf("Content of string in before: %s\n", in);

	rev(in);
	printf("Content of string in after: %s\n", in);

	return(0);
}
/*
 *There is another problem. When the function rev has executed, it disappears.
 If the array is declared inside rev, the array only exists while rev exists.
 This is the reason why we need to return a pointer to the array that is
 declared outside rev. The input for rev takes a pointer to a consecutive 
 memoryarea that holds the input. This can be spectated in the file: 
 ./examples/str_ma.c
 Also other testing can be found there.
 */
