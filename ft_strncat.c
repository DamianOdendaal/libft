/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 10:59:00 by dodendaa          #+#    #+#             */
/*   Updated: 2019/06/10 11:47:16 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (s2[j] != '\0' && n < j)
	{
		s1[i +j] = s2[j];
		j++;
	}
	s1[i +j] = '\0';
	return (s1);
}