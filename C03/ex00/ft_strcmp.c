/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:43:50 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/02 15:44:58 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

/*int main()
{
	char	*s; 
	char	*s1; 

	s = "Hello";
	s1 = "Hello";
	printf("%s\n%s\nft_strcmp-> %d\n", s, s1, ft_strcmp(s, s1));

	s = "hello";
	s1 = "hel";
	printf("%s\n%s\nft_strcmp-> %d\n", s, s1, ft_strcmp(s, s1));

	s = "hel";
	s1 = "hello";
	printf("%s\n%s\nft_strcmp-> %d\n", s, s1, ft_strcmp(s, s1));

	s = "";
	s1 = "";
	printf("\"%s\"\n\"%s\"\nft_strcmp-> %d\n", s, s1, ft_strcmp(s, s1));
}*/
