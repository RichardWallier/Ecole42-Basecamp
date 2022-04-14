#include <stdlib.h>

void	ft_strncpy(char *src, char *dest, int len)
{
	int	index;

	index = 0;
	while (src[index] && index < len)
		dest[index] = src[index++];
	return ;
}

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght])
		lenght++;
	return (lenght);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(ft_strlen(src));
	ft_strncpy(src, dest, ft_strlen(src));
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*src = "Velhote";
	char	*text;
	text = strdup(src);
	printf("%s\n", src);
	printf("%s\n", text);
	free (text);

	char	*src2 = "Velhote2";
	char	*text2;

	text2 = strdup(src2);
	printf("%s\n", src2);
	printf("%s\n", text2);
	free (text2);
	return (0);
}
*/
