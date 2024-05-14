/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:14:22 by madamou           #+#    #+#             */
/*   Updated: 2024/05/14 18:02:46 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		i = nb * i;
		nb--;
	}
	return (i);
}

// int main (void)
// {
// 	printf("%d\n", ft_iterative_factorial(13));
// }