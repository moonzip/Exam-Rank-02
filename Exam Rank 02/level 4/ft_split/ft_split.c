#include <stdlib.h>

char	**ft_split(char *str)
{
	char	**buf;
	int	word;
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while ((str[i]) && (str[i] == '\t' || str[i] == ' ' || str[i] == '\n'))
			i++;
		if ((str[i]) && (str[i] != '\t' && str[i] != ' ' && str[i] != '\n'))
			word++;
		while ((str[i]) && (str[i] != '\t' && str[i] != ' ' && str[i] != '\n'))
			i++;
	}
	i = 0;
	k = 0;
	buf = malloc(sizeof(char *) * (word + 1));
	if (!buf)
		return (NULL);
	while (str[i])
	{
		while ((str[i]) && (str[i] == '\t' || str[i] == ' ' || str[i] == '\n'))
			i++;
		j = i;
		while ((str[i]) && (str[i] != '\t' && str[i] != ' ' && str[i] != '\n'))
			i++;
		if (i > j)
		{
			buf[k] = malloc(sizeof(char) * (i - j + 1));
			if (!buf[k])
				return (NULL);
			l = 0;
			while (j < i)
				buf[k][l++] = str[j++];
			buf[k][l] = '\0';
			k++;
		}
	}
	buf[k] = NULL;
	return (buf);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "   	hola   como 		estas				 ";
	char	**cosa = ft_split(str);
	int	i;
	char *s;
	i = 0;
	while (cosa[i] != NULL)
	{
		s =  cosa[i];
		printf("%s\n", s);
		i++;
	}
}
