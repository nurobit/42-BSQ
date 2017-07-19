/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwade <vwade@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 21:59:25 by vwade             #+#    #+#             */
/*   Updated: 2017/07/18 18:06:26 by vwade            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ATOI_C
# define FT_ATOI_C

char	*shift(char *s)
{
	int i;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
			|| s[i] == '\v' || s[i] == '\r' || s[i] == '\f')
		s++;
	return (s);
}

int		ft_atoi(char *str)
{
	int i;
	int n;
	int isneg;

	str = shift(str);
	isneg = (*str == '-') ? 1 : 0;
	ft_putstr("Value is ");
	ft_putstr((isneg) ? "negative.\n" : "not negative.\n");	
	ft_putstr(str);
	i = 0;
	n = 0;
	if (*str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		n = 10 * n + (*str++ - '0');
	}
	return ((isneg) ? -n : n);
}

#endif

/*
**	Get character array, and shift array by one until there aren't any spaces
**	or whitespaces (invisible characters) >>
**	before computations. Check first index for '-' and if true, set return
**	value to negative and shift pointer ahead by one.
**	If the next character in the array is a number betwee 0 and 9,
**	begin the while loop.
**	Order of number generation is from left to right, starting with the first
**	index.
**	The first character is calculated and added to the integer value of 'n'.
**	The loop iterates. The value of 'n' is moved to the "left" by multiplying it
**	by 10, before adding the next value to it.
**	Subsequently, logic is applied to the return value to check if the value is
**	negative.
*/
