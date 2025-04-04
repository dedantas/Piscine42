/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:43:50 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 15:44:58 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alphanumeric(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			i++;
			while (is_alphanumeric(str[i]))
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
				i++;
			}
		}
		else
			i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; d-de";

	printf("Antes: %s\n", str);
	ft_strcapitalize(str);
	printf("Depois: %s\n", str);

	return (0);
}*/
