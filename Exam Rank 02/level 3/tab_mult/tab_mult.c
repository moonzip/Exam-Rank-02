#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(const char *s)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (s[i] == ' ' || (s[i] >= '\t' && s[i] <= '\r'))
		i++;
	if (s[i] == '+')
		i++;
	while (s[i] >= '0' && s[i] <= '9')
      	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res * sign);
}

void	ft_putnbr(int nb)
{
	if (nb / 10 > 0)
		ft_putnbr (nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	main(int argc, char **argv)
{
	int	i;
	int	num;

	if (argc != 2)
		write (1, "\n", 1);
	else
	{
		i = 1;
		num = ft_atoi(argv[1]);
		while (i <= 9 && num <= 238609183)
		{
			ft_putnbr(i);
			write (1, " x ", 3);
			ft_putnbr(num);
			write (1, " = ", 3);
			ft_putnbr (i * num);
			write (1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}
