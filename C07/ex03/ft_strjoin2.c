#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	int	counter1;
	int	counter2;

	counter1 = 0;
	counter2 = 0;
	while (dest[counter1] != '\0')
		counter1++;
	while (src[counter2] != '\0')
		dest[counter1++] = src[counter2++];
	dest[counter1] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*finalstr;
	int		index;
	int	total_len;

	if (size == 0)
	{
		finalstr = malloc(1);
		finalstr[0] = '\0';
		return (finalstr);
	}
	total_len = 0;
	index = 0;
	while (index < size)
		total_len += ft_strlen(strs[index++]);
	finalstr = malloc (total_len + ft_strlen(sep) * size - 1);
	if (finalstr == NULL)
		return (NULL);
	index = 0;
	while (index < size)
	{
		if (*strs[index] && index > 0)
			ft_strcat(finalstr, sep);
		ft_strcat(finalstr, strs[index++]);
	}
	return (finalstr);
}

#include <string.h>

int	main()
{
	char	*strs[] = {"um", "dois", "tres", "4", "2"};
	char	*sep = ", ";
	int		size = 5;
	char *finalstr = ft_strjoin(size, strs, sep);
	puts(finalstr);
	free(finalstr);
	return (0);
}
