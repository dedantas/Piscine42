/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:56:24 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 19:01:45 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

/*int main()
{
    int nb;

    // Teste com alguns números
    nb = 4;
    printf("Próximo primo após %d: %d\n", nb, find_next_prime(nb)); // Saída: 5

    nb = 13;
    printf("Próximo primo após %d: %d\n", nb, find_next_prime(nb)); // Saída: 13

    nb = 20;
    printf("Próximo primo após %d: %d\n", nb, find_next_prime(nb)); // Saída: 23

    nb = 1;
    printf("Próximo primo após %d: %d\n", nb, find_next_prime(nb)); // Saída: 2

    nb = 29;
    printf("Próximo primo após %d: %d\n", nb, find_next_prime(nb)); // Saída: 29

    nb = 100;
    printf("Próximo primo após %d: %d\n", nb, find_next_prime(nb)); // Saída: 101

    return (0);
}*/
