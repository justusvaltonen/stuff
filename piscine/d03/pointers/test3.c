
#include	<stdio.h>

int	main()
{
	int a = 1;
	int *p = &a;
	int **pp = &p;
	int ***ppp = &pp;
	int ****pppp = &ppp;

	int b = 2;
	int *x = &b;
	int **xx = &x;
	int ***xxx = &xx;
	int ****xxxx = &xxx;

	printf("\nMA of a: %p\n", &a);
	printf("MA of p: %p\n", &p);
	printf("MA of pppp: %p\n", &pppp);
	
	printf("\nMA of b: %p\n", &b);
	printf("MA of xxxx: %p\n", &xxxx);
	printf("End content of xxxx: %d\n", ****xxxx);

	xxxx = &ppp;
	printf("MA of xxxx: %p\n", &xxxx);
	****xxxx = 6;
	printf("MA of a: %p\n", &a);
	printf("Content of a: %d\n", a);
	
	printf("Content of xxxx before: %d\n", ****xxxx);
	
	printf("MA of xxxx: %p\n", &xxxx);
	//xxxx = &pp;	doesn't work
	puts("--------------");

	printf("Content of a: %d\nMA of where p points to (a): %p\n", a, p);
	puts("--------------");
	&*p++;
	puts("&*p++;\n");
	printf("Content of a: %d\nMA of where p points to (a): %p\n", a, p);
	puts("--------------");
	&*p++;
	puts("&*p++;\n");
	printf("Content of a: %d\nMA of where p points to (a): %p\n", a, p);
	puts("--------------");
	printf("MA of a without using a pointer: %p\n", &a);
	puts("--------------");
	printf("MA of pointer p: %p\n", &p);
	return(0);
}

//Seems that we copy the content of a using a pointer.
