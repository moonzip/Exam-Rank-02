#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	count;

	count = 0;
	while (s[count] != '\0')
	{
		i = 0;
		while (reject[i] != '\0')
		{
			if (s[count] == reject[i])
				return (count);
			i++;
		}
		count++;
	}
	return (count);
}
