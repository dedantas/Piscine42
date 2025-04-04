/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:13:01 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/03 13:16:05 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	j;
	int	k;

	(void) argc;
	j = 1;
	while (argv[j] != NULL)
	{
		k = 0;
		while (argv[j][k] != '\0')
		{
			ft_putchar(argv[j][k]);
			++k;
		}
		++j;
		ft_putchar('\n');
	}
}
