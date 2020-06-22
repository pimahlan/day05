/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimahlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:36:43 by pimahlan          #+#    #+#             */
/*   Updated: 2020/06/22 14:39:40 by pimahlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int		i;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >='a' && str[i] <= 'z') )
			return (0);
		i++;
	}
	return (1);
}

/*

int		main(void)
{
	printf("%d", ft_str_is_lowercase("wethinkcode"));
	return (0);
}*/
