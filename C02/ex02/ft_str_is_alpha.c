/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:43:50 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 15:44:58 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
		{
			if (!(str[i] >= 97 && str[i] <= 122))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

/*int main()
{
	char str[] = "Thisisjustamockstring";

	char wei[] = "Thís ïz $a$ #weird# @@@ string!!!";

	char emp[] = "";

	printf("%s : %d\n", str, ft_str_is_alpha(str));
	printf("%s : %d\n", wei, ft_str_is_alpha(wei));
	printf("Empty : %d\n", ft_str_is_alpha(emp));
}*/
