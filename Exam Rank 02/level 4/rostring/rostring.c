#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	start;
	int	end;

	if (argc >= 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		start = i;
		while (argv[1][i] != '\0' && argv[1][i] != '\t' && argv[1][i] != ' ')
			i++;
		end = i; 
		while (argv[1][i] != '\0')
		{
			while (argv[1][i] == '\t' || argv[1][i] == ' ')
				i++;
			if (argv[1][i] == '\0')
				break;
			while (argv[1][i] && argv[1][i] != '\t' && argv[1][i] != ' ')
				write (1, &argv[1][i++], 1);
			write (1, " ", 1);
		}
		write (1, argv[1] + start, end - start);
	}
	write (1, "\n", 1);
}
