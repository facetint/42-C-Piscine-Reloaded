/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:46:57 by facetint          #+#    #+#             */
/*   Updated: 2023/06/19 17:47:22 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < ac)
	{
		while (av[j][i])
		{
			ft_putchar(av[j][i]);
			i++;
		}
		j++;
		i = 0;
		ft_putchar('\n');
	}
	return (0);
}
