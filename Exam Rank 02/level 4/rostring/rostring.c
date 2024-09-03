#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;
	int	l;
	int	word;

	i = 0;
	word = 0;
	if (argc >= 2)
	{
		while (argv[1][i] == '\t' || argv[1][i] == ' ')
			i++;
		j = i;
		while (argv[1][i] != '\t' && argv[1][i] != ' ' && argv[1][i] != '\0')
			i++;
		i--;
		k = i;
		while (argv[1][i] != '\0')
			i++;
		i--;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i--;
		l = i;
		i = k;
		i++;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (i <= l)
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				write (1, " ", 1);
				while (argv[1][i] == ' ' || argv[1][i] == '\t')
					i++;
			}
			word++;
			write (1, &argv[1][i++], 1);
		}
		if (word > 1)
			write (1, " ", 1);
		while (j <= k)
			write(1, &argv[1][j++], 1);
	}
	write (1, "\n", 1);
}
