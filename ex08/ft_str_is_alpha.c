/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimahlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:15:15 by pimahlan          #+#    #+#             */
/*   Updated: 2020/06/22 14:35:39 by pimahlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int		i;
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i]>= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
/*
int		main(void)
{
	printf("%d", ft_str_is_alpha("hel-lo"));
	return (0);
}*/
