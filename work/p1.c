#include <stdio.h>


int main()
{
	int arr[2][5] = {{1, 9, 3, 4, 5}, {6, 7, 8, 0, 2}};
	
	int (*p)[5] = arr;
	int size = 5;
	int i = 0;
	int j ;
	while (i < 2)
	{
		j = 0;
		while (j < size)
		{
			printf("%d ", p[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
		return (0);
}
