/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimahlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:55:56 by pimahlan          #+#    #+#             */
/*   Updated: 2020/06/22 15:26:26 by pimahlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


char *ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int k;
	i = 0;
	k =0;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	 dest[i] = 32;
	 
	while(k <= nb)
	{
	    dest[i] = src[k];
	    k++;
	    i++;
	}
	
	dest[i] ='\0';
	
	return (dest);
}
/*
int		main(void)
{
    char dest[50] = "This is an "; 
    char src[50] = " examplee"; 
    
	printf("%s\n", ft_strncat(dest, src,6));
	return (0);
}*/
