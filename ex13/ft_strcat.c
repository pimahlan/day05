/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimahlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:45:16 by pimahlan          #+#    #+#             */
/*   Updated: 2020/06/22 14:55:17 by pimahlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src)
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
	 
	while(src[k] !='\0')
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
    
	printf("%s\n", ft_strcat(dest, src));
	return (0);
}*/
