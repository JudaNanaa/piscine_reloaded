/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@contact.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:21:16 by madamou           #+#    #+#             */
/*   Updated: 2024/05/13 17:30:37 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (min < max)
	{
		tab[i++] = min++;
	}
	return (tab);
}

// int	main(void)
// {
// 	int min;
// 	int max;

// 	min = 2;
// 	max = 10;
// 	int *test = ft_range(min, max);
// 	int i = 0;
// 	while (i < max - min)
// 		printf("%d\n", test[i++]);
// 	free(test);
// }