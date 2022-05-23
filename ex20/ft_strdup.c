/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 16:03:50 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/05/23 03:46:10 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;
	int		j;

	i = ft_strlen(src);
	str = (char *) malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (src[j] != '\0')
	{
		str[j] = src[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}
