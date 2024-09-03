int	max(int* tab, unsigned int len)
{
	int	result;
	unsigned int	i;

	i = 0;
	result = 0;
	if (!tab)
		return (0);
	while (i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}
