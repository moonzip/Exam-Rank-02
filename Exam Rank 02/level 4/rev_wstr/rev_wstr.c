#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	first;

	i = 0;
	first = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		i--;
		while (i >= 0)
		{
			while (i >= 0 && argv[1][i] == ' ' || argv[1][i] == '\t')
				i--;
			j = i;
			while (j >= 0 && argv[1][j] != ' ' && argv[1][j] != '\t')
				j--;
			if (first != '\0')
				write (1, " ", 1);
			write (1, &argv[1][j + 1], i - j);
			first = 1;
			i = j;
		}
	}
	write (1, "\n", 1);
	return (0);
}
