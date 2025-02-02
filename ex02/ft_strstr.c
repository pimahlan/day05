/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimahlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 09:18:44 by pimahlan          #+#    #+#             */
/*   Updated: 2020/06/22 10:13:46 by pimahlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		k;
	char	*same;
	same = 0;
	i =0;
	if (!*to_find)
		return (str);
	
	while (*str)
	{
		if (str[i] == to_find[0])
		{
			same = str + i;
			k= 0;
			while (str[i + k] == to_find[k])
			{
				if (to_find[k + 1] == '\0')
					return (same);
				k++;
			}
			same = 0;
		}
		i++;
	}
	return (0);
}

/*
int		main(void)
{
	char *s1;

	s1 = "hello world";
	printf("%s\n", ft_strstr(s1, "lo"));
	return (0);
	}
	*/
