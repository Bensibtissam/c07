#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	size;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	result = malloc(sizeof(int) * size);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

// #include <stdio.h>
// int main() {
//     int min = 6;
//     int max = 5;
//     int size = max - min;
//     int *array = ft_range(min, max);
//     if (array == NULL)
//         return (0);
//     int i = 0;
//     while (i< size) {
//         printf("%d\n", array[i]);
//         i++;
//     }
//     return (0);
// }