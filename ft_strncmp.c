/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:13:15 by dodendaa          #+#    #+#             */
/*   Updated: 2019/06/07 16:05:49 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;

	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && i < n)
	{
		i += 1;
	}
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		i += 1;
	}

	return (s1[i] - s2[i]);
}