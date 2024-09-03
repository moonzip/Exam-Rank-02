#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;
	int	z;
	
	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		if (x <= y)
			z = x;
		else
			z = y;
		while (z >= 1)
		{
			if (x % z == 0 && y % z == 0)
			{
				printf("%d\n", z);
				return (0);
			}
			else
				z--;
		}
	}
	printf("\n");
}

