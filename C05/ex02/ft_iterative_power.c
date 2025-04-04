/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:45:58 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 18:46:50 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	accumulator;

	accumulator = 1;
	if (power < 0)
		return (0);
	while (power--)
		accumulator *= nb;
	return (accumulator);
}

/*int	main(void)
{
	printf("%d", ft_iterative_power(5, 2));
}*/
