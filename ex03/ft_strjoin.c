#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*empty_str(void)
{
	char	*result;

	result = malloc(sizeof(char));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	return (result);
}

char	*allocate_str(int size, char **strs, char *sep)
{
	int		total;
	char	*join;
	int		i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += (ft_strlen(sep) * (size - 1));
	join = malloc(sizeof(char) * (total + 1));
	return (join);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*join;
	int		offset;
	int		j;

	if (size == 0)
		return (empty_str());
	join = allocate_str(size, strs, sep);
	if (join == NULL)
		return (NULL);
	offset = 0;
	i = 0;
	while (i < size && strs[i])
	{
		j = 0;
		while (strs[i][j])
			join[offset++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			join[offset++] = sep[j++];
		i++;
	}
	join[offset] = '\0';
	return (join);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int size = 3;
// 	char *strs[] = {"karim", "ikram", "ibtissam"};
// 	char *result = ft_strjoin(size, strs, "_");
// 	if (result == NULL)
// 		return (0);
// 	printf("%s\n", result);
// 	return (0);
// }