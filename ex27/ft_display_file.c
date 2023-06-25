/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facetint <facetint@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:01:57 by facetint          #+#    #+#             */
/*   Updated: 2023/06/21 18:02:20 by facetint         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *file_name)
{
	char	buf[2];
	int		r_byte;
	int		fd;

	r_byte = 1;
	fd = open(file_name, O_RDONLY);
	while (r_byte != 0)
	{
		r_byte = read(fd, buf, 1);
		if (r_byte == -1)
		{
			write(1, "Cannot read file.\n", 18);
			return ;
		}
		buf[r_byte] = '\0';
		write(1, buf, r_byte);
	}
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
		ft_display_file(argv[1]);
	return (0);
}
