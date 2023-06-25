/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:30:53 by facetint          #+#    #+#             */
/*   Updated: 2023/06/18 15:36:41 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int		letter;

	letter = 97;
	while (letter <= 122)
	{
		ft_putchar(letter);
		letter++;
	}
}
