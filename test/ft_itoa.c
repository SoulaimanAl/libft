#include <stdio.h>
#include <stdlib.h>

int count(int nb)
{
	int i = 0;
	while (nb > 0)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

char	*rev(char *s, int size)
{
	int		i;
	char	d;

	i = 0;
	size -= 1;
	while (i < size)
	{
		d = s[i];
		s[i] = s[size];
		s[size] = d;
		i++;
		size--;
	}
	return (s);
}

char	*ft_itoa(int nbr)
{
	int		n;
	int		i;
	int		sign;
	char	*s;
	
	sign = 1;
	if (nbr < 0)
	{
		nbr = -nbr;
		sign = -1;
	}
	n = count(nbr);
	s = (char *)malloc(sizeof(char) * (n + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (nbr > 0)
	{
		s[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (sign == -1)
		s[i++] = '-';
	s[i] = '\0';
	s = rev(s, i);
	return (s);
}

int main()
{
	int nb = -2147483648;
	char *r = ft_itoa(nb);
	printf("%s\n", r);
	free(r);
}
