#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int j;
	int	a[255] = {0};

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j])
				{
					if (a[argv[1][i]] == 0)
					{
						a[argv[1][i]] = 1;
						write (1, &argv[1][i], 1);
					}
					if (argv[1][i] == '\0')
						break;
				}
				j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
}

