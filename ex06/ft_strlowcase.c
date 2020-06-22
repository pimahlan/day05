/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimahlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 10:55:26 by pimahlan          #+#    #+#             */
/*   Updated: 2020/06/22 11:11:34 by pimahlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strlowcase(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*
int		main(void)
{
	char test[]= "WE THINK CODE";
	printf("%s \n", test);
	printf("%s \n", ft_strlowcase(test));
	return (0);
}*/
