
#include	<unistd.h>
#include	<stdio.h>

int	main()
{
	char x = 't';
	printf("%s", &x);
	write(1, &x, 1);

	return(1);
}

/*
 * I made main to return 1 instead 0 and it seemed that nothing happened.
 * It should return a 0 to let some computergod know that everything went well.
 * Why doesn't the computergod not punish me because 1?
 * From the previous days assignments I realized that even tho there were errors, hardly ever was there a error message.
 * From reading the interweb Ive discovered that the errors in linux are stored somewhere. If I recall correctly, its called the dump.
 * Naming is done perfectly because who would like to read errors if they can be ignored?
 * There are also different logs than just error related that linux saves. When you have more time, study them more.
