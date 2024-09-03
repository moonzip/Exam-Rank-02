#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			j = 0;
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					k = 0;
					while (k < i)
					{
						if (argv[1][k] == argv[1][i])
							break;
						k++;
					}
					if (k == i)
						write (1, &argv[1][i], 1);
					break;
				}
				j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
}
