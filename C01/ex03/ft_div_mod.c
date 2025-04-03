/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:02:19 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 16:05:13 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int		main(void)
{
	int		div, mod, n, n1;

	n = 42;
	n1 = 21;
	ft_div_mod(n, n1, &div, &mod);
	printf("\n%d/%d = %d with remainder %d\n\n", n, n1, div, mod);
}*/
