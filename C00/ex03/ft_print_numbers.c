/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:16:16 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 15:17:10 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}

void	ft_print_numbers2(void)
{
	char	n;

	n = '/';
	while (++n < ':')
		write(1, &n, 1);
}

/*int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	ft_print_numbers2();
	write(1, "\n", 1);
}*/
