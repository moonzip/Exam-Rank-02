#include <unistd.h>

int	ft_atoi(char *s)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i] == 10 || s[i] == 12 || s[i] == 13 || s[i] == 32)
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - 48;
		i++;
	}
	return (res);
}

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 16)
	{
		ft_putnbr(nb / 16);
		ft_putnbr(nb % 16);
	}
	else
		write(1, &"0123456789abcdef"[nb % 16], 1);
}

int	main(int argc, char **argv)
{
	int	i;
	if (argc == 2)
	{
		i = ft_atoi(argv[1]);
		ft_putnbr(i);
	}
	write (1, "\n", 1);
}
