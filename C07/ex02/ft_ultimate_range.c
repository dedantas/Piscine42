/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedantas <dedantas@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 18:37:14 by dedantas          #+#    #+#             */
/*   Updated: 2025/04/03 18:38:44 by dedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

/*int	main()
{
	int	*arr;
	int		size;
	int		i;

	size = ft_ultimate_range(&arr, 5, 10);
	if (size == -1)
		printf("Erro na alocação de memória\n");
	else if (size == 0)
		printf("Intervalo inválido\n");
	else
	{
		printf("Array: ");
		for (i = 0; i < size; i++)
			printf("%d ", arr[i]);
		printf("\n");
		free(arr);
	}
	return 0;
}*/
