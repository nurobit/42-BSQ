/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwade <vwade@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 00:01:07 by vwade             #+#    #+#             */
/*   Updated: 2017/07/18 17:22:33 by vwade            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUTSTR_C
# define FT_PUTSTR_C

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		ft_putchar(str[pos]);
		pos++;
	}
}

#endif

/*
**	An array is a pointer to a set of data stored in memory.
**	Accessing the array directly points to the index of data stored within it.
**	A strong comparison exists between a memory pointer and array index.
**	A memory pointer shifts through memory addresses rather directly.
**	This also causes the index to shift. (?)
**	An array index shifts through memory addresses allocated
**	by the array itself.
*/
