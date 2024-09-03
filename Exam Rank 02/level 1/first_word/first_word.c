#include <unistd.h>

int	ft_spaces(int a)
{
	if (a == 32 || a == 13 || a == 9 || a == 10)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (ft_spaces(argv[1][i]))
			i++;
		while (argv[1][i] != '\0' && !ft_spaces(argv[1][i]))
			write (1, &argv[1][i++], 1);
	}
	write (1, "\n", 1);
}
