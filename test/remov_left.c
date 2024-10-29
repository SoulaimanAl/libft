/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remov_left.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salahian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:00:41 by salahian          #+#    #+#             */
/*   Updated: 2024/07/19 08:08:27 by salahian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	len(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*concat(char *s1, char *s2, char *c, int size)
{
	int		i;
	int		j;

	i = size;
	j = 0;
	while (s2[i])
	{
		s1[j] = s2[i];
		j++;
		i++;
	}
	i = 0;
	s1[j] = ' ';
	j++;
	while (c[i])
	{
		s1[j] = c[i];
		j++;
		i++;
	}
	return (s1);
}

void	print(char *s)
{
	int		i;
	int		found;
	int		d;
	char	c[100];

	i = 0;
	d = 0;
	while (s[i])
	{
		found = 0;
		if (s[i] != ' ')
			found = 1;
		if (found)
		{
			c[d++] = s[i];
			if (s[i + 1] == ' ')
				c[d++] = ' ';
		}
		i++;
	}
	 i = 0;
	 while (i < len(c) - 1)
	 {
		 write(1, &c[i], 1);
		 i++;
	 }
	 write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	int		size;
	char	*s;
	char	c[50]; 

	if (ac != 2 || av[1][0] == '\0')
	{
		write(1, '\n', 1);
		return (0);
	}
	s = (char *)malloc(sizeof(char) * (size + 1));
	if (s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (av[1][i])
	{
		if (av[1][i] != ' ')
			c[j] = av[1][i];
		else
			break;
		i++;
		j++;
	}
	s = concat(s, av[1], c, i);
	i = 0;
	 while (s[i])
	 {
		 write(1, &s[i], 1);
		 i++;
	 }
	 write(1, "\n", 1);
	print(s);
	free(s);
	return (0);
}
