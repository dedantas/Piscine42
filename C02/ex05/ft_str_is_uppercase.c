/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:43:50 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 15:44:58 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			++str;
		else
			return (0);
	}
	return (1);
}

/*int main()
{
	char str[] = "THISISALLUPPERCASE";

	char wei[] = "thishassomelowercase";

	char emp[] = "";

	printf("%s : %d\n", str, ft_str_is_uppercase(str));
	printf("%s : %d\n", wei, ft_str_is_uppercase(wei));
	printf("Empty : %d\n", ft_str_is_uppercase(emp));
}*/
