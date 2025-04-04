/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:14:22 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 15:15:20 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		--c;
	}
}

void	ft_print_reverse_alphabet2(void)
{
	short	c;

	c = '{';
	while (--c > '`')
		write(1, &c, 1);
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	ft_print_reverse_alphabet2();
	write(1, "\n", 1);
}*/
