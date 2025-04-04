/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:43:50 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 15:44:58 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len_str;
	int	len_to_find;

	i = 0;
	len_str = ft_strlen(str);
	len_to_find = ft_strlen(to_find);
	if (len_to_find == 0)
		return (str);
	while (i <= len_str - len_to_find)
	{
		j = 0;
		while (j < len_to_find && str[i + j] == to_find[j])
		{
			j++;
		}
		if (j == len_to_find)
		{
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
    char str[] = "String totalmente a aleatoria";
    char find[] = "a";

    printf("%s\n", ft_strstr(str, find)); // Saída esperada:"a aleatoria"
}*/
