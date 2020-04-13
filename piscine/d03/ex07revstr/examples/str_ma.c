
#include	<stdio.h>

void	func(char *fp);

void	func(char *fp)
{
	int i = 0;

	while(i < 4)
	{
		printf("MA of fp[i]: %p\n", &fp[i]);
		printf("MA of fp[i]: %p\n", *&fp);
		i++;
	}
	puts("End of func\n------");
}

int	main()
{
	char *mp = "Every character has a unique MA";
	int i = 0;
	char *str = "Cats and dogs";
	printf("MA of &str, the pointer itself: %p\n", &str);
	printf("MA of *&str, C, where str points to: %p\n", *&str);
	printf("MA of *&str[i], I don't understand: %p\n", *&str[i]);
	puts("This might be the value of C\n");
	printf("%d\nSeems true\n", *&str[i]);
	printf("MA of &str[i], the same as *&str: %p\n", &str[i]);
	while(i < 4)
	{
		printf("MA of mp[i] in main: %p\n", &mp[i]);
		i++;
	}
	puts("Start of func:");
	func(mp);

	return(0);
}

