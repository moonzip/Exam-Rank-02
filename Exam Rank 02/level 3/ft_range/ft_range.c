#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	*range;
	int	len;
	int	i;

	i = 0;
	if (start <= end)
		len = end - start + 1;

	else if (end <= start)
		len = start - end + 1;
	i = 0;
	range = (int *)malloc(len * (sizeof(int)));
	if (!range)
		return (NULL);
	while (len > i)
	{
		if (start <= end)
			range[i] = start + i;
		else
			range[i] = start - i;
		i++;
	}
	return (range);
}
