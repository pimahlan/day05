/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pimahlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 10:25:55 by pimahlan          #+#    #+#             */
/*   Updated: 2020/06/22 10:32:54 by pimahlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2, unsigned int n)
{
	int i;
	i = 0;
	while (s1[i] == s2[i])
	{
	    if (i >= n)
	       return(0);
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char *string1;
	char *string2;

	string1 = "aaaaa";
	string2 = "aaaab";
	printf("%i", ft_strcmp(string1, string2,4));
	return (0);
}*/
