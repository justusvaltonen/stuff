
#include	<stdio.h>

char *ft_strrev(char *str);

char *ft_strrev(char *str)
{
	int i = 0;
	int count = 0;

	while(str[count] != 0)
		count++;
	char local[count + 1];
	count--;
	while(count >= 0)
	{
		local[i] = str[count];
		count--;
		i++;
	}
	local[i] = '\0';
	i = 0;
	while(local[i] != 0)
	{
		str[i] = local[i];
		i++;
	}
	return(str);
}

int	main()
{
	char input[] = "table";
	char *pm;
	pm = &input[0];
	printf("input before: %s\n", input);
	ft_strrev(pm);
	printf("input after: %s\n", input);

	return(0);
}
