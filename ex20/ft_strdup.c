/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:24:05 by facetint          #+#    #+#             */
/*   Updated: 2023/06/18 15:25:14 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*ret_val;

	i = 0;
	while (src[i])
		i++;
	ret_val = malloc(sizeof(char) * (i + 1));
	i = 0;
	while (src[i])
	{
		ret_val[i] = src[i];
		i++;
	}
	ret_val[i] = '\0';
	return (ret_val);
}
