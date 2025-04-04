/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:26:17 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 15:42:55 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char fst_1, char fst_2, char scd_1, char scd_2)
{
	write(1, &fst_1, 1);
	write(1, &fst_2, 1);
	write(1, " ", 1);
	write(1, &scd_1, 1);
	write(1, &scd_2, 1);
	if (fst_1 != '9' || fst_2 != '8')
	{
		write(1, ", ", 2);
	}
}

void	ft_int_to_char(int fst, int scd)
{
	char	fst_1;
	char	fst_2;
	char	scd_1;
	char	scd_2;

	fst_1 = (fst / 10) + '0';
	fst_2 = (fst % 10) + '0';
	scd_1 = (scd / 10) + '0';
	scd_2 = (scd % 10) + '0';
	ft_print(fst_1, fst_2, scd_1, scd_2);
}

void	ft_print_comb2(void)
{
	int	fst_number;
	int	scd_number;

	fst_number = 0;
	while (fst_number < 99)
	{
		scd_number = fst_number + 1;
		while (scd_number <= 99)
		{
			ft_int_to_char(fst_number, scd_number);
			scd_number++;
		}
		fst_number++;
	}
}

/*int main()
{
	ft_print_comb2();
}*/
