#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	if (argc > 1)
	{	
		while (argv[j])
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
				{
					argv[j][i] += 32;
				}
				i++;
			}
			i = 0;
			while (argv[j][i] != '\0')
			{
				if ((argv[j][i + 1] == ' ' || argv[j][i + 1] == '\t' || argv[j][i + 1] == '\0') && (argv[j][i] >= 'a' && argv[j][i] <= 'z'))
				{
					argv[j][i] -= 32;
					write (1, &argv[j][i], 1);
				}
				else
					write (1, &argv[j][i], 1);
				i++;
			}
			j++;
			if (j < argc)
				write (1, "\n", 1);
		}
	}
	write (1, "\n", 1);
}
