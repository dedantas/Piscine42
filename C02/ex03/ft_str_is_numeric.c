/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:43:50 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 15:44:58 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 48 && *str <= 57)
		{
			++str;
		}
		else
			return (0);
	}
	return (1);
}

/*int main(){
	char str[] = "64826841651";

	char wei[] = "68426482A";

	char emp[] = "";

	printf("%s : %d\n", str, ft_str_is_numeric(str));
	printf("%s : %d\n", wei, ft_str_is_numeric(wei));
	printf("Empty : %d\n", ft_str_is_numeric(emp));
}*/
