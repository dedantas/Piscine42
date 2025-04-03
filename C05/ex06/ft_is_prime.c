/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 18:53:20 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 18:55:57 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*int main()
{
    int nb;

    // Teste com alguns números
    nb = 2;
    printf("%d -> %d\n", nb, ft_is_prime(nb)); // Saída esperada: 1

    nb = 17;
    printf("%d -> %d\n", nb, ft_is_prime(nb)); // Saída esperada: 1

    nb = 20;
    printf("%d -> %d\n", nb, ft_is_prime(nb)); // Saída esperada: 0

    nb = 1;
    printf("%d -> %d\n", nb, ft_is_prime(nb)); // Saída esperada: 0

    nb = 29;
    printf("%d -> %d\n", nb, ft_is_prime(nb)); // Saída esperada: 1

    nb = 100;
    printf("%d -> %d\n", nb, ft_is_prime(nb)); // Saída esperada: 0

    return (0);
}*/
