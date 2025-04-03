/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:05:48 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 16:06:23 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		tmp;

	if (*b)
	{
		tmp = *a;
		*a = *a / *b;
		*b = tmp % *b;
	}
}

/*int 	main(void)
{
	int a;
	int b;

	a = 42;
	b = 5;
	printf("a = %d ; b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d ; b = %d", a, b);
}*/
