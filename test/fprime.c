#include <stdio.h>
#include <stdlib.h>

void	fprime(int n)
{
	int		i;
	if (n <= 1)
	{
		printf("%d\n", n);
		return ;
	}
	i = 2;
	while (n != 1)
	{
		if (n % i == 0)
		{
			printf("%d", i);
			if (n != i)
				printf("*");
			else
				printf("\n");
			n /= i;
		}
		else
			i++;
	}
}

int main(int ac, char **av)
{
	if (ac != 2 || av[1][0] == '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	int nb = atoi(av[1]);
	fprime(nb);
	return (0);
}
