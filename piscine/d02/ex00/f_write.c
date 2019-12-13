
#include	<stdio.h>
#include	<unistd.h>

int	main()
{
	char x = 'i';
	char str[] = "abc"; 
	write(1, str, 2);
	putchar('\n');
	write(1, &x, 1);
	putchar('\n');
	write(1, "13 characters", 13);
	putchar('\n');
	puts("1 char using write:");
	write(1, "a", 1);
	putchar('\n');
	return(0);
}

/*
 * Demonstration of C: If initialize 1 character we use ' ', if more we use " ".
 * String is combination of characters. This string is initialized as a 1 dimentional array. More on these later on.
 * Write is a stdio.h library command. first attribute in () is where we are going to write.
 * There are different variations where we can write, but for a while we are going to use 1. 1 means standard output (the screen in english).
 * Second attribute means where we want to print from. Notice that the attributes are separated with,.
 * Usage of & is a bit complicated, so well leave this for a bit later. Right now we will have to deal with the fact that we need to use one for accessing contents of x.
 * The last attribute inside writes () means how many characters we want to print.
 * At this time we will print ab. The last char will not be printed.
 * Putchar is a built in function that is supposed to be the same as ft_putchar.
 * '\n' means that we print the character \n. It means change of line.
 *
 * In the function write the first parameter means where to write. 0 for standard input, that feels quite weird for me since the standard input should be the keyboard I think.
 * Not knowing a lot but hearing some, the data that moves inside the computer goes through different routes. Maybe the input port? can be used for more than just writing.
 * 1 Means standard output that should be your screen. This I know can be used for trickery but not during this bootcamp.
 * 2 Should mean error message place. Not sure what it means but sounds like hacking stuff for me because lazy programmers ignore errors when ever they can.
 * We can also write to other places for example a file. Does the file need to be defined by the main function is yet to be seen for me. Maybe there are some cool tricks we can do with this write function.
 *
 * The second parameter is used to define what we are writing. We can write a string we define, only a character or the contents of something.
 *The & means that we access the memory content of something. I got this wrong at first and Im not 100% sure how it works. What I do know is that by googling the write function we can see that the secon parameter uses * or a pointer.
 The * works as a dereferencer of &. When used without the * & gives a physical memory address inside the computer in a way that is not readable unless more studying is done.
 It is a different language that is used for these commands.
 What we have to know for now is that & gives readable content because the write function is built in a way that the normal output of & is not showing but instead the content of that memory address.
 Same goes for str[]. If we try to read str with another function that does not include * in it, the stuff that should come out would be only the content of the first slot. As a forgetful humanoid I forgot how to test these things properly but will do so later on.
 *Don't know if its true but if you use a string like "asdqwe" inside writes second parameter, the string would not be terminated properly and might be open for exploit.
 There is a character called EOF that possibly can help us with that.
 */
