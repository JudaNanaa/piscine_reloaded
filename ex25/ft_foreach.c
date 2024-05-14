/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:55:03 by madamou           #+#    #+#             */
/*   Updated: 2024/05/14 16:57:22 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// void	ft_putnbr(int nb)
// {
// 	printf("%d\n", nb);
// }

// int main(void)
// {
// 	int tab[10];
// 	int i = 0;

// 	while (i < 10)
// 	{
// 		tab[i] = i;
// 		i++;
// 	}
// 	ft_foreach(tab, i, &ft_putnbr);
// }