#include <unistd.h>

int	ft_atoi(char *s)
{
	int	i;
	int	sign;
	int	res;
	
	i = 0;
	sign = 1;
	res = 0;
	while (s[i] == 32 || s[i] == 10 || s[i] == 13)
		i++;
	if (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - 48);
		i++;
	}
	return (res * sign);
}

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

int	prime(int n)
{
	int	i;

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
	int	sum;

	sum = 0;
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		if (n < 0)
			write (1, "0", 1);
		else
		{
			while (n >= 2)
			{
				if (prime(n) == 1)
					sum += n;
				n--;
			}
			ft_putnbr(sum);
		}
	}
	else
		write (1, "0", 1);
	write (1, "\n", 1);
}
