/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:12:33 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 15:13:19 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c < 123)
	{
		write(1, &c, 1);
		++c;
	}
}

void	ft_print_alphabet2(void)
{
	char	c;

	c = 0b01100000;
	while (++c <= 'z')
		write(1, &c, 1);
}

/*int	main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
	ft_print_alphabet2();
	write(1, "\n", 1);
}*/
