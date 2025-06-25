#include <stdlib.h>

int	nbrlen(int len)
{
	int	i;

	i = 0;
	if (len == 0)
		return(1);
	if (len < 0)
	{
		i = i + 1;
		len *= -1;
	}
	while (len)
	{
		i++;
		len = len / 10;
	}
	return (i);
}

char *ft_strcpy(char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	*ft_itoa(int nbr)
{
	int	i;
	char	*a;
	
	i = nbrlen(nbr);
	a = malloc(sizeof(char) * i + 1);
	if (!a)
		return (NULL);
	if (nbr == 0)
		ft_strcpy(a, "0");
	if (nbr == 2147483647)
		ft_strcpy(a, "2147483647");
	if (nbr < 0)
	{
		a[0] = '-';
		nbr *= -1;
	}
	a[i] = '\0';
	i = i - 1; 
	while (nbr)
	{
		a[i] = (nbr % 10) + 48;
		i--;
		nbr = nbr / 10;
	}
	return (a);
}

