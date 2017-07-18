/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwade <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 14:03:46 by vwade             #+#    #+#             */
/*   Updated: 2017/07/18 14:21:44 by vwade            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_func.h"

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		ft_bsq(av[1]);
		return(0);
	}
	else if (ac > 2)
		while (++i < ac)
			ft_bsq(av[i]);
	return(0);
}
