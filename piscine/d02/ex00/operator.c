
#include	<stdio.h>

int	main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;

	a = (3 == 2);
	b = (3 == 3);
	c = (1 > 3);
	d = (1 < 3);

	char sun[] = "abcdefghij";
	int i = 0;
	while(i < 4)
	{
		putchar(sun[i]);
		i++;
	}
	putchar('\n');
	putchar(a + '0');
	putchar('\n');
	putchar(b + '0');
	putchar('\n');
	putchar(c + '0');
	putchar(10);
	putchar(d + '0');
	putchar('\n');
	putchar(10);

	//e = ((int) k);	ignore this
	return(0);
}

/*We just made a bunch of variables. We shall make a (3==2); What? Why?
 * The (3==2) compares 3 and 2. When we use == it means we compare what is on the left side with what is on the right side and see if they match.
 * As most know, 3 is not 2. What will be the contents of a? 0.
 * If the comparison is false, its answer will be 0. If it were to be true, the answer would be 1 as seen for b.
 * Also < and > are comparison operators and work the same way.
 * C is a language of functions they say. Lets find out what else is a function.
 * I consider anything with a return a fuction for now.
 * The "operation succesfull" check test I tried to do failed. I tried to see if the declaration of anything had a return value like many other things.
 * It possibly does but I couldn't get it to work for now. It also might be that it doesn't.
 * Now we tackle the rest of the program.
 * We initialize character array by the name of sun. We don't define maximum size in bytes, but the exatct size by telling what string to put in at the time of initialization.
 * "abcdefghij" is the string. String is a bunch of chars in seqvense. The invisible \0 character is also at the end of the string.
 * Then we initialize i that is shorten for index, that is used to travel inside the function. This can also be named something else if wanted.
 * Because the first element of an array is in the slot #0, we set the i:s value to 0.
 * We want to print only 4 characters of the array for demonsrative pourposes so we do the above while loop.
 * You can access the slot # any of the sun array by sun[any]. This grants access of the contents of that slot.
 * So we putchar the slot#i while i < 4. Don't forget to add 1 to i so you won't accidentally generate an infinite loop. Even tho the movies might make you think, no black holes or other weird stuff is going to occur.
 * When we are done (i == 4), we are going to putchar a linebreak. The number value is 10 I think. The value is retrieved from ASCII table. The table can be found by googling it.
 * Other method is to putchar character \n that should be the same.
 * Last we are going to return 0 that tells the OS(operating system) that everything went well. I don't know if the 0 message is going to the OS or some other place that interprets it.
 * The return values are a bit strange. When we compare, the wanted return is 1 if everything went well while the main function desires the 0. Return values can be different depending on the function that was called, but that is what we see later on.
 * Almost forgot. The reason why when we putchar dontents of lets say d, we add character 0 to it because the content of d is of type integer.
 *For example if the content of d would be '\n' (character newline) its integer value would be 10. Computer doesn't know if we want to print an integer or a character unless we tell it.
 If the content would be number 10, it would print a new line.
 Number 1 is start of heading what ever that means. Number 48 is character 0.
 Since we want to print out a nuber lookalike character, we add the number 48 or character 0. This will be used more later on.
 * */
