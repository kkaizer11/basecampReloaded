/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 03:49:16 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/05/23 23:54:17 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;
	int	j;

	i = 0;
	j = min;
	result = (int *)malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		result = NULL;
		return (result);
	}
	while (j < max)
	{
		result[i] = j;
		i++;
		j++;
	}
	return (result);
}
