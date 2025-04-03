/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:48:47 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 18:49:44 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (0 == power)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}

/*int	main(void)
{
	printf("%d", ft_recursive_power(5, 2));
}*/
