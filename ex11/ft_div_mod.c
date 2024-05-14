/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:07:18 by madamou           #+#    #+#             */
/*   Updated: 2024/05/13 16:13:08 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main (void)
// {
// 	int *div;
// 	int *mod;
// 	int a;
// 	int b;

// 	a = 45;
// 	b = 5;
// 	div = &a;
// 	mod = &b;
// 	ft_div_mod(a, b, div, mod);
// 	printf("%d\n", *div);
// 	printf("%d\n", *mod);
// }