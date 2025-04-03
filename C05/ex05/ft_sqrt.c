/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:52:12 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 18:52:50 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while ((i * i) <= nb)
	{
		if ((i * i) == nb)
			return (i);
		++i;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_sqrt(4));
}*/
