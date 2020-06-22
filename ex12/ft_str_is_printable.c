/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimahlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:42:21 by pimahlan          #+#    #+#             */
/*   Updated: 2020/06/22 14:44:33 by pimahlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int ft_str_is_uppercase(char *str)
{
	int		i;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >=32 && str[i] <= 126) )
			return (0);
		i++;
	}
	return (1);
}
/*
int		main(void)
{
	printf("%d", ft_str_is_uppercase("WE THINK CODe"));
	return (0);
}*/
