/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:18:51 by facetint          #+#    #+#             */
/*   Updated: 2023/06/19 16:20:18 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*val;

	if (min >= max)
		return (0);
	val = malloc(sizeof(int) * (max - min));
	if (val == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		val[i] = min;
		i++;
		min++;
	}
	return (val);
}
