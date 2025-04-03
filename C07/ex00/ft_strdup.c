/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 13:54:17 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/03 18:32:55 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	char	*n;
	int		i;
	int		a;

	i = 0;
	a = ft_strlen(src) + 1;
	n = (char *)malloc(sizeof(char) * a);
	if (!n)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		n[i] = src[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}

/*int	main(int ac, char **av)
{
	char	*cp;

	if (ac == 2)
	{
		cp = ft_strdup(av[1]);
		printf(":%s:\n", cp);
	}
}*/
