/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpickett <jpickett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 17:18:58 by vwade             #+#    #+#             */
/*   Updated: 2017/07/18 22:35:50 by jpickett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUTCHAR_C
# define FT_PUTCHAR_C
# include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

#endif
