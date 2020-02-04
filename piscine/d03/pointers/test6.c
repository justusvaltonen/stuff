
#include	<stdio.h>

void	funk(int *plane);

void	funk(int *plane)
{
	printf("\nContent of where plane points to: %d\n", *plane);
	printf("MA of plane before: %p\n", &plane);
	printf("MA of int variable in main where plane points to:");
	printf(" %p\n", *&plane);
	puts("Lets plane++;\n------------\n");
	plane++;

	printf("Content of where plane points to: %d\n", *plane);
	printf("MA of plane after first ++: %p\n", &plane);
	printf("MA of what used to be an int var in main: %p\n", *&plane);
//Just happened that we assigned int variables in main one after another.
//If memory allows, the ints are assigned to memory right after another.
//When we told the pointer plane to jump to point to the next memslot, it jumped
//to the next variable named useless that holds the value of 18. If the next
//memoryslot is not free when we assign variables who knows what will happen.
//Lets test but lets first plane++ again to make sure.

	puts("\nLets plane++ for the second time\n");
	plane++;
	printf("Content of where plane points to: %d\n", *plane);
	printf("MA of plane after second ++: %p\n", &plane);
	printf("MA of int var in main after second ++: %p\n", *&plane);
}

int	main()
{
	int a = 38;
	int useless = 18;
	int reserve = 77;

	int *mpa = &a;
	int *mpu = &useless;
	int *mpr = &reserve;

	printf("\nContent a: %d\nMA a: %p\n", a, &a);
	printf("Content useless: %d\nMA useless: %p\n", useless, &useless);
	printf("Content reserve: %d\nMA reserve: %p\n", reserve, &reserve);

	printf("Content mpa: %d\nMA mpa: %p\n", *mpa, &mpa);
	printf("Content mpu: %d\nMA mpu: %p\n", *mpu, &mpu);
	printf("Content mpr: %d\nMA mpr: %p\n", *mpr, &mpr);
	puts("\nLets funk!\n");

	funk(mpa);

	puts("\n\nBack to main\n");

	printf("\nContent a: %d\nMA a: %p\n", a, &a);
        printf("Content useless: %d\nMA useless: %p\n", useless, &useless);
        printf("Content reserve: %d\nMA reserve: %p\n", reserve, &reserve);
        
        printf("Content mpa: %d\nMA mpa: %p\n", *mpa, &mpa);
        printf("Content mpu: %d\nMA mpu: %p\n", *mpu, &mpu);
        printf("Content mpr: %d\nMA mpr: %p\n", *mpr, &mpr);

	return(0);
}
