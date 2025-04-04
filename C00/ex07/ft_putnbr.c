/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:43:50 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 15:44:58 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		else
		{
			nb = -nb;
			write(1, "-", 1);
		}
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
}

/*int main()
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(9002);
	write(1, "\n", 1);
	ft_putnbr(-9002);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
}*/
