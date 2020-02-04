
#include	<stdio.h>

int	main()
{
	int num = 7;
	printf("\nMemory address of num is: %p\nContent is: %d\n", &num, num);

	int *p_num = &num;
	printf("Memory address of p_num pointer: %p\n", &p_num);
	printf("Content of where p_num points to: %d\n", *p_num);

	int **pp_num = &p_num;
	puts("---------------");

	printf("Memory address of **pp_num: %p\n", &pp_num);
	printf("Memory address where **pp_num points: %p\n", &*pp_num);
	printf("Memory address where **pp_num points trough p_num");
	printf(": %p\n", &**pp_num);
	puts("---------------\n");

	int ***ppp;
	ppp = &pp_num;
	printf("Memory address of ppp: %p\n", &ppp);
	printf("ppp points to mem of p_num: %p\n", &**ppp);
	printf("Also can get pp_num: %p\n", &*ppp);
	printf("And num: %p\n\n", &***ppp);

	return(0);
}
