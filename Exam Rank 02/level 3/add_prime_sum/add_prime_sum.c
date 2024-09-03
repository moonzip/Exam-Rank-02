#include <unistd.h>

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	else if (nbr >= 0 && nbr <= 9)
	{
		c = nbr + 48;
		write(1, &c, 1);
	}
	else if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - 48;
		i++;
	}
	return (sign * nbr);
}

int	prime(int n)
{
	int i;

	i = n - 1;
	if (n == 2)
		return (1);
	while (i >= 2)
	{
		if (n % i == 0)
			return (0);
		i--;	
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	n;
	int	x;

	n = 0;
	x = 0;
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		if (n < 0)
			write(1, "0", 1);
		else
		{
			while (n >= 2)
			{
				if (prime(n) == 1)
					x += n;
				n--;
			}
			ft_putnbr(x);
		}
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}





