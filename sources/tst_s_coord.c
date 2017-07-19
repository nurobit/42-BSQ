/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_s_coord.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwade <vwade@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 16:08:45 by vwade             #+#    #+#             */
/*   Updated: 2017/07/18 17:18:02 by vwade            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_func.h"

int		main(int ac, char **av)
{
	t_coord		cd;
	if (ac == 1 || ac > 3)
	{
		cd.x = 10;
		cd.y = 32;
		printf("Test coord struct: x->[%i] y->[%i]\n", cd.x, cd.y);
	}
	else if (ac == 3 || ac == 2)
	{
		cd.x = ft_atoi(av[1]);
		cd.y = ft_atoi((ac == 2) ? "32" : av[2]);
		printf("Test coord struct: x[%i] y[%i]\n", cd.x, cd.y);
	}
	return 0;
}