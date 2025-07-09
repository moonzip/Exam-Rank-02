#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	spc;

	spc = 0;
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				spc = 1;
			else
			{
				if (spc != '\0')
					write (1, "   ", 3);
				spc = 0;
				write (1, &argv[1][i++], 1);
			}
		}
	}
	write (1, "\n", 1);
}
