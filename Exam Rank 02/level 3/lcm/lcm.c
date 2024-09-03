unsigned int    lcm(unsigned int a, unsigned int b)
{
	int	i;

	i = 0;
	if (a == 0 || b == 0)
		return (0);
	else if (a < b)
		i = a;
	else if (b < a)
		i = b;
	while (i)
	{
		if (i % a == 0 && i % b == 0)
			return (i);
		else
			i++;
	}
	return (i);
}
