#include <string.h>

char	*ft_strdup(char *src)
{
	int	i;
	char	*a;

	i = 0;
	a = malloc(sizeof(char) * (i + 1));
	while (src[i] != '\0')
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

