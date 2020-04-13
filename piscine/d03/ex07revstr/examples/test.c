
#include	<stdio.h>

void	fun(void);
void	func(void);
void	arr(char *p);

void	fun()
{
	puts("--------------");
	int a = 0;
	printf("MA of fun/a: %p\n", &a);
	puts("----------");
}

void	func()
{
	puts("-------------");
	int b = 5;
	printf("MA of func/b: %p\n", &b);
	puts("----------");
}

void	arr(char *p)
{
	puts("-------------");
	printf("arr/putchar(*p): ");
	putchar(*p);
	puts("");
	char str[] = "test";
	char *pa;
	pa = &str[0];
	printf("MA of arr/p pointer: %p\n", &p);
	printf("MA of arr/str: %p\n", str);
	printf("MA of arr/pa: %p\n", &pa);
	printf("MA of arr from arr perspective: %p\n", arr);
	printf("MA of arr/copyof *p: %p\n", &p);
	puts("-----------");
}

int	main()
{
	printf("MA of fun, func, arr:\n%p,\n%p,\n%p\n", &fun, &func, &arr);
	fun();
	fun();
	func();
	char input[] = "Thisisinput";
	char *pm;
	pm = &input[0];
	printf("MA of pm: %p\n", &pm);
	arr(pm);

	printf("MA of fun, func, arr:\n%p,\n%p,\n%p\n", &fun, &func, &arr);
	func();

	return(0);
}

