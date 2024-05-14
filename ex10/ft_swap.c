/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:45:27 by madamou           #+#    #+#             */
/*   Updated: 2024/05/13 15:05:31 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	buff;

	buff = *a;
	*a = *b;
	*b = buff;
}

// int	main(void)
// {
// 	int nba;
// 	int nbb;
// 	int *testa;
// 	int *testb;

// 	nba = 24;
// 	nbb = 42;
// 	testa = &nba;
// 	testb = &nbb;
// 	ft_swap(testa, testb);
// 	printf("%d\n", nba);
// 	printf("%d\n", nbb);
// }