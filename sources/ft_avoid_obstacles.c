/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_avoid_obstacles.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpickett <jpickett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 14:08:14 by jpickett          #+#    #+#             */
/*   Updated: 2017/07/19 14:25:42 by jpickett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>

int		ft_avoid_obstacles(char **str, int x, int y)
{
	while (str[y][x] != 'o' && str[y][x] != '\n')
		y++;
	if (str[y][x] == 'o')
	{
		return (y);
	}
	else
		return (0);
}
char	**ft_avoid_obstacles_v2(char **str, int x, int y)
{
	char **bailando;

	bailando = str;
	while (ft_avoid_obstacles(str, x, y) == 0)
	{
		y = ft_avoid_obstacles(str, x, y);
		x++;
		ft_putchar("%d", y);
	}
	ft_putchar("%d", y);
	if (y >= (ft_avoid_obstacles(str, x, y)) && x < y)
	{
		ft_putstr("test");
		x++;
	}
	if (x == y)
		ft_print_x(bailando, str, x, y);
	else if (x < y)
	{
		y = x;
		bailando = ft_print_x(bailando, str, x, y);
	}
	return (bailando);
}
