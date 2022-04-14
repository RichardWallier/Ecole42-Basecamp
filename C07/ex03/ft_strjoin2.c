#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	counter1;
	int	counter2;

	counter1 = 0;
	counter2 = 0;
	while (dest[counter1] != '\0')
	{
		counter1++;
	}
	while (src[counter2] != '\0')
	{
		dest[counter1] = src[counter2];
		counter1++;
		counter2++;
	}
	dest[counter1] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*finalstr;
	int		index;

	index = 0;
	finalstr = malloc (sizeof(strs));
	while(index < size)
	{
		if(*strs[index] && index > 0)
				ft_strcat(finalstr, sep);
		ft_strcat(finalstr, strs[index++]);
	}
	return (finalstr);
}

// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	*strs[] = {"um", "dois", "tres", "quatro"};
// 	char	*sep = ", ";
// 	int		size = 4;
// 	char *finalstr = ft_strjoin(size, strs, sep);
// 	puts(finalstr);
// 	return (0);
// }
