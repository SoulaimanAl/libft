/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salahian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:01:02 by salahian          #+#    #+#             */
/*   Updated: 2024/07/12 11:37:48 by salahian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	print(char *s)
{
	int		i;

	i = len(s) - 1;
	while (i >= 0)
	{
		write(1, &s[i], 1);
		i--;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		word;
	char	c[50];

	if (argc <= 1 || argc > 2 || argv[1][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	j = 0;
	word = 0;
	i = len(argv[1]) - 1;
	while (i >= 0)
	{
    	if (argv[1][i] != ' ' && argv[1][i] != '\t')
    	{
        	c[j] = argv[1][i];
        	j++;
        	word = 1;
    	}
    	else if (word == 1)
    	{
        	break;
    	}
    	i--;
}
	print(c);
	write(1, "\n", 1);
	return (0);
}
