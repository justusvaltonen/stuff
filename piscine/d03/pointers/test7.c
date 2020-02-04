
#include	<stdio.h>

void	func1(int *p1);
void	func2(char *cp1);
void	table();

void	table()
{
	puts("\nStart of function table\n");
	int k = 3;
	int l = 3;
	int *ip = &k;
	printf("MA of where ip points to: %p\n", *&ip);
	puts("We assign ip to another variable with the same value");
	ip = &l;
	printf("MA of where ip points to after reassignment: %p\n", *&ip);
	puts("End of function table\n");
	/*
	 *According to internet, all possible integers and characters are in a
	 single table and are handled by pointers. Accessing this table is done
	 by some other means than this. Variables are assigned to different 
	 memoryslots even tho their content would be the same.
	 */
}

void	func1(int *p1)
{
	puts("Func1!\n");
	int test1 = 3;
	int test2 = 5;
	char test3 = 'k';

	printf("MA of p1 in func1 before ++: %p\n", &p1);
	printf("Content of p1 before: %d\n", *p1);
	p1++;
	printf("MA of p1 in func1 after ++: %p\n", &p1);
	printf("Content of p1 after: %d\n", *p1);

	printf("Content of test1: %d\nMA of test1: %p\n", test1, &test1);
	printf("\nContent of test2: %d\nMA of test2: %p\n", test2, &test2);
	printf("\nContent of test3: %c\nMA of test3: %p\n", test3, &test3);

	p1 = &test1;

	printf("MA of p1: %p\n", &p1);
	puts("Making p1 point to test1. Content 3");
	printf("Content of p1 before p1++: %d\n", *p1);
	p1++;
	printf("Content of p1 after p1++: %d\n", *p1);
	puts("End of func1\n");
}

void	func2(char *cp1)
{
	int f2i = 7;
	int f2i2 = 11;
	char f2c = 't';
	cp1 = &f2c;
	puts("Func2!\n");
	printf("MA of f2i: %p\n", &f2i);
	printf("MA of f2i2: %p\n", &f2i2);
	printf("MA of cp1 in func2 before cp1++: %p\n", &cp1);
	printf("MA of f2c in func2: %p\n", &f2c);
	printf("MA of where cp1 points to in func2 before cp1++: %p\n", *&cp1);
//Because char comes first, we assign the pointer to char and then ++ to see
//where it points to.
	cp1++;
	printf("MA of where cp1 points to after cp1++: %p\n", *&cp1);
	printf("Content of where cp1 points to after: %d\n", *cp1);
	cp1++;

	printf("MA of where cp1 points to after second cp1++: %p\n", *&cp1);
	printf("Content of where cp1 points to after second cp1++: %d\n", *cp1);
	puts("Lets cp1++ again");
	printf("MA of where cp1 points to: %p\n", *&cp1);
	printf("Content of where cp1 points to after third cp1++: %d\n", *cp1);
	
	cp1++;
	puts("cp1++ again");
	printf("MA of where cp1 points to: %p\n", *&cp1);
	printf("Content of where cp1 points to: %d\n", *cp1);

	cp1++;
	puts("cp1++ again");
	printf("MA of where cp1 points to: %p\n", *&cp1);
	printf("Content of where cp1 points to: %d\n", *cp1);

	cp1++;
	puts("cp1++ for the last time");
	printf("MA of where cp1 points to: %p\n", *&cp1);
	printf("Content of where cp1 points to: %d\n", *cp1);

	puts("End of func2\n");
	/*
	 *As we can see, we can make a char* point to an integer and get the
	 value out without an error. Lets see what happens when we cp1++ again
	 to see what the second byte of an integer holds. No sensible output.
	 */
}

int	main()
{
	int mio = 2;
	int mit = 6;
	char mco = 'p';
	char mct = 'q';
	int mith = 11;
	int mif = 33;
	char mcth = 'a';
	char mcf = 'b';

	int *p1 = &mio;
	int *p2 = &mit;
	int *p3 = &mith;
	char *cp1 = &mco;
	char *cp2 = &mct;
	int *p4 = &mif;
	char *cp3 = &mcth;
	char *cp4 = &mcf;

	printf("Content mio: %d\nMA mio: %p\n\n", mio, &mio);
	printf("Content mit: %d\nMA mit: %p\n\n", mit, &mit);
	printf("Content mco: %c\nMA mco: %p\n\n", mco, &mco);
	printf("Content mct: %c\nMA mct: %p\n\n", mct, &mct);
	printf("Content mith: %d\nMA mith: %p\n\n", mith, &mith);
	printf("Content mif: %d\nMA mif: %p\n\n", mif, &mif);
	printf("Content of mcth: %c\nMA of mcth: %p\n\n", mcth, &mcth);
	printf("Content of mcf: %c\nMA of mcf: %p\n\n", mcf, &mcf);

	printf("Content p1: %d\nMA p1: %p\n\n", *p1, &p1);
	printf("Content p2: %d\nMA p2: %p\n\n", *p2, &p2);
	printf("Content p3: %d\nMA p3: %p\n\n", *p3, &p3);
	printf("Content cp1: %c\nMA cp1: %p\n\n", *cp1, &cp1);
	printf("Content cp2: %c\nMA cp2: %p\n\n", *cp2, &cp2);
	printf("Content p4: %d\nMA p4: %p\n\n", *p4, &p4);
	printf("Content of cp3: %c\nMA of cp3: %p\n\n", *cp3, &cp3);
	printf("Content of cp4: %c\nMA of cp4: %p\n\n", *cp4, &cp4);
	
	printf("MA of function func1: %p\n", func1);
	printf("MA of function func2: %p\n", func2);
	puts("Funcytime\n");

	func1(p1);
	func2(cp1);
	printf("MA of function func1 after first run: %p\n", func1);
	printf("MA of function func2 after first run: %p\n", func2);

	puts("Lets func again\n");

	func1(p1);
	func2(cp1);

	printf("MA of function func1 after second run: %p\n", func1);
	printf("MA of function func2 after second run: %p\n", func2);
	
	table();

	return(0);
}
/*
 *Legendary works on my computer test. Demonstration that char takes 1 byte, int
 takes 4. Start counting from 0. 48, 49, 4a, 4b, 4c, 4d. 4e, 4f, 50, 51, 52...

 On my computer, it doesn't matter were in code you place declarations, char 
 comes first in memory. Int pointer takes 2 bytes, char pointer takes 2 also.
 Variable of type char takes 1 byte, variable int takes 4.

 When we declare a pointer and assign it in the same line, the next pointer
 is assigned to MA 8 bytes after the first.

 On my computer when func1 is run, the same MA:s are used in func2 for variables
 and pointers witch proves that the functions itself are only temporary.
 */
