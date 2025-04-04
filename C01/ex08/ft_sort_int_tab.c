/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:15:40 by dedantas          #+#    #+#             */
/*   Updated: 2025/01/21 12:37:06 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int tab[6] = {10, 5 , 7, 4, 22, 23};
	for(int i = 0; i < 6; i++)
	{
		printf("-%d", tab[i]);
	}
	printf("\n");
	ft_sort_int_tab(tab, 6);
	for(int i = 0; i < 6; i++)
	{
		printf("-%d", tab[i]);
	}
}*/
