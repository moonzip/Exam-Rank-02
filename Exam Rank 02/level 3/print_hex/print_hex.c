#include <unistd.h>

int	ft_atoi(char *s)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if(s[i] == ' ' || s[i] == 9 || s[i] == 13)
		i++;
	while (s[i] != '\0')
	{
		res = (s[i] - '0') + (res * 10);
		i++;
	}
	return (res);
}

void	print_hex(unsigned long long nb)
{
	char	*hex;
	
	hex = "0123456789abcdef";
	if (nb >= 16)
		print_hex(nb / 16);
	write(1, &hex[nb % 16], 1);
}

int	main(int argc, char **argv)
{	
	int	i;

	i = 0;
	if (argc == 2)
	{
		print_hex(ft_atoi(argv[1]));		
	}
	write (1, "\n", 1);
	return (0);
}
