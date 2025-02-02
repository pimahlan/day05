/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimahlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 10:57:05 by pimahlan          #+#    #+#             */
/*   Updated: 2020/06/22 14:14:14 by pimahlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcapitalize(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if ((str[i] <= '9' && str[i] >= '0') ||
				(str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (flag && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= ('a' - 'A');
			if (!flag && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += ('a' - 'A');
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}
	return (str);
}
/*
int		main(void)
{
	char test[]= "we thik code";
	printf("%s \n", test);
	printf("%s \n", ft_strcapitalize(test));
	return (0);
}*/
