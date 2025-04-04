/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:00:26 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 16:01:52 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int	main(void)
{
	int	n;
	int	n1;

	n = 42;
	n1 = 21;
	printf("before\n %d %d\n", n, n1);
	ft_swap(&n, &n1);
	printf("after\n %d %d\n", n, n1);
}*/
