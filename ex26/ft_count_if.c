/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 12:46:20 by madamou           #+#    #+#             */
/*   Updated: 2024/05/14 16:54:21 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	cpt;
	int	returnd;

	cpt = 0;
	i = 0;
	while (tab[i])
	{
		returnd = f(tab[i]);
		if (returnd == 1)
			cpt++;
		i++;
	}
	return (cpt);
}

// int ft_printf(char *str)
// {
// 	int i;

// 	i = printf("%s\n", str);
// 	if (i >= 0)
// 		return (1);
// 	return (0);
// }

// int main(void)
// {
// 	char *test[3];

// 	test[0] = "je test";
// 	test[1] = "tkt pas";
// 	test[2] = "mon vieux";
// 	printf("%d\n", ft_count_if(test, &ft_printf));
// }