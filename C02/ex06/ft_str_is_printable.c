/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:43:50 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 15:44:58 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str != 127)
			++str;
		else
			return (0);
	}
	return (1);
}

/*int main(){
	char str[] = "This is printable.";

	char wei[] = "Get some unprintable chars: tab (\t), beep: (\a).";

	char emp[] = "";

	printf("%s : %d\n", str, ft_str_is_printable(str));
	printf("%s : %d\n", wei, ft_str_is_printable(wei));
	printf("Empty : %d\n", ft_str_is_printable(emp));
}*/
