#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	space = 0;

	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{	
				space = 1;
				i++;
			}
			else
			{	
				if (space != '\0')
					write (1, "   ", 3);
				space = 0;
				write (1, &argv[1][i++], 1);
			}
		}
	}
	write (1, "\n", 1);
}
