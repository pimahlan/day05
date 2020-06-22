/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimahlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:40:17 by pimahlan          #+#    #+#             */
/*   Updated: 2020/06/22 14:41:42 by pimahlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int ft_str_is_uppercase(char *str)
{
	int		i;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >='A' && str[i] <= 'Z') )
			return (0);
		i++;
	}
	return (1);
}

/*

int		main(void)
{
	printf("%d", ft_str_is_uppercase("WETHINKCODe"));
	return (0);
}*/
