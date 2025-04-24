#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int	num;

	i = 2;
	if (argc == 2)
	{
		num = atoi(argv[1]);
		while (num >= i)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				num = num / i;
				if (num >= i)
					printf("*");
			}
			else
				i++;
		}
	}
	printf("\n");
	return (0);
}
