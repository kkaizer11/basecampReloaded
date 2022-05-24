/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 00:26:31 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/05/24 18:56:29 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_POINT_H
# define  FT_POINT_H

typedef struct t_point
{
	int	x;
	int	y;
}	t_point;

void	set_point(t_point *point);
#endif 