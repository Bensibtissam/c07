#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*array;
	int	i;

	*range = NULL;
	if (min >= max)
		return (0);
	size = max - min;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (size);
}

#include <stdio.h>

int	main(void)
{
	int min = 6;
	int max = 5;
	int *array;
	int size = ft_ultimate_range(&array, min, max);
	if (array == NULL)
		return (0);
	int i = 0;
	while (i < size)
	{
		printf("%d\n", array[i]);
		i++;
	}
	return (0);
}