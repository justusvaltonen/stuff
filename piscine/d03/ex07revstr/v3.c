
#include	<stdio.h>

char	*revstr(char *p);

char	*revstr(char *p)
{
	int i = 0;
	int count = 0;

	while(p[count] != 0)
		count++;
//Where p points to in memory + count steps in addresses. Content is not 0.
//Should be 5 now
	char local[count + 1]; //need to make room for the null
	count--;	//4
	while(count >= 0)
	{
		local[i] = p[count]; //'t' -> local[0]...
		putchar(local[i]); //Just checking
		i++;
		count--;
	}
//local[i] = 0;
//Not sure if the above line is neccessary in this case or is it just pure luck
//that 0 is found in the memory address of p[-1].
	printf("Local without null termination:\n%s\n", local);
	i = 0;
	printf("\nlocal: %s\n", local); //just a check
	while(local[i] != 0)
	{
		p[i] = local[i];
		i++;
	}
	printf("p in func: %s\n", p);
	puts("End of func\n-----");
	return(p);
}

int	main()
{
	char arr[] = "input"; //5+null == 6
	char *pa; //declaration of the pointer pa.
	pa = &arr[0]; //pa points to MA of beginning of arr
	revstr(pa);
	char *second = revstr(pa); //This can be done
	printf("pa in main: %s\n", pa);
	printf("second in main: %s\n", second);
//From here we can guess that the pointer itself is returned.

	int a = *(revstr(pa));
//This is how we get the content of the returned pointer that is 116.
	
	printf("pa in main again: %s\n", pa);
	printf("Content of a: %d\n", a); //116 in ASCII == 't'
	char x = *(revstr(pa));
	printf("Content of x: %c\n", x);
//This doesnt seem to work the way I want. I would have thought x would recieve
//i as answer.
	printf("\n%d\n", x);
//The answer is 127 that is DEL in ascii. Why 127? don't know.

	return(0);
}

