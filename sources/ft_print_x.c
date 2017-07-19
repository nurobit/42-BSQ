/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpickett <jpickett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 21:30:42 by jpickett          #+#    #+#             */
/*   Updated: 2017/07/19 14:11:40 by jpickett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_print_x(char **bailando, char **str, int x, int y)
{
	int		temp;

	temp = y;
	**bailando = **str;
	while (bailando[x][y] != 'o')
	{
		while (y > 0)
		{
			bailando[x][y] = 'x';
			y--;
		}
		y = temp;
		x--;
	}
	return (bailando);
}

/*	this file prints the values of x
**  change the changeme var to something more fitting I can get too creative
**	we establish a doubl pointer of the fn print_x and the var to be changed
**  establish int temp and set it to val og y
**	set pointer of changed var to the doub pointer for the str
**	start a while loop if we are not at an o, looking for the squares
**	then we establish when y is greater than 0 start a nested while loop,
**	and set the changed var of xy to char x and deinc val of y
**	set y to val of temp and deinc val of x
**	while still in orig while loop of not being at char o
**	return the value of changed var
*/