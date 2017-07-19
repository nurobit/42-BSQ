/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwade <vwade@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 05:52:01 by vwade             #+#    #+#             */
/*   Updated: 2017/07/04 07:08:04 by vwade            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int isneg;

	isneg = (nb < 0) ? 1 : 0;
	nb = (nb < 0) ? nb * -1 : nb;
	if (isneg != 0)
		ft_putchar('-');
	if (nb > 9 || nb % 10 < 0)
		ft_putnbr((nb % 10 < 0) ? -1 * (nb / 10) : nb / 10);
	ft_putchar((nb % 10 < 0) ? '0' - (nb % 10) : nb % 10 + '0');
}

/*
**	'ft_putnbr' will take an input value and first determine if the value is
**	negative. After, it will loop through itself, checking if the passed
**	value is > 9 and, if so, dividing by 10 and printing % 10 post-recursion.
**	An exception for the value 0x80000000 is made. Self correcting.
*/
