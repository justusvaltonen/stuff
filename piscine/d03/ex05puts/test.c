
#include	<unistd.h>
#include	<stdio.h>

void	pstr(char *str);
int	fpc(char x);
void	alternative(char *str);

void	alternative(char *str)
{
	while(*str != 0)
	{
		fpc(*str);
		str++;
	}
}

void	pstr(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		fpc(str[i]);
		fpc(i + 48);
		i++;
	}
	fpc(str[i] + 48);
	fpc('\n');
}

int	fpc(char x)
{
	return(write(1, &x, 1));
}

int	main()
{
	char *string = "Dummy V";
	pstr(string);

	char arr[5] = "error";

	pstr(arr);
	alternative(arr);
	return(0);
}

/*
 *This is the simple version. There is a possibility that the string doesn't 
 contain a terminator ('\0'). In this case something weird happens. Lets see if
 it can be replicated.

 Something weird happens. This actually works. The dummy version should work
 because if we don't define the length of a string, a null terminator is
 automatically added. However on the arr case we define the arr to have 5 slots.
 error is 5 characters. Therefore there shouldn't be room for a null on the
 array.

 Hmm.. maybe because the function pstr takes a pointer to a string as input,
 it reads the 1d array or string and automatically adds the '\0'? The output
 is a bit messy, but we can see that the 0 is printed. In ASCII 0 is the same as
 '\0'. How do we make a string that is not null terminated then?

 This is an area of research for later. It would be good to find out what 
 happens at the time of compiling.
 */
