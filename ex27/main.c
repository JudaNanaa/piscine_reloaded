/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 13:04:51 by madamou           #+#    #+#             */
/*   Updated: 2024/05/14 16:43:39 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_norminette(char **argv)
{
	int		nb_read;
	int		fd;
	char	buff[100];

	nb_read = 100;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return ;
	}
	while (nb_read == 100)
	{
		nb_read = read(fd, buff, 100);
		write(1, buff, nb_read);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc >= 3)
		write(2, "Too many arguments.\n", 20);
	else
		ft_norminette(argv);
	return (0);
}
