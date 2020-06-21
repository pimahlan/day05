#include <unistd.h>
#include <stdio.h>
#include <string.h>


char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;
	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int		main(void)
{
	char src[] = "We think code";
	char dest[20] ;

	ft_strncpy(dest, src,4);
	printf("%s\n", dest);
}*/
