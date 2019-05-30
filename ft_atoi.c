/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:35:23 by dodendaa          #+#    #+#             */
/*   Updated: 2019/05/27 14:43:35 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

int	ft_atoi(char *a)
{
	size_t i;
	size_t b;
	size_t ret;

	i = 0;
	b = 1;
	ret = 0;
	while (a[i] == ' ' || a[i] == '\t' || a[i] == '\n' || a[i] == '\v' || a[i] == '\f' ||
			a[i] == '\r')
		i++;
	if (a[i] == '-' || a[i] == '+')
	{
		if (a[i] == '-')
			b = -1;
		i++;
	}
	while (ft_isdigit(a[i]))
	{
		ret  = (ret * 10) + a[i] - '0';
		i++;
	}
	ret = ret * b;
	return (ret);
}
