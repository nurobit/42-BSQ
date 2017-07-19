/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpickett <jpickett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 14:03:46 by vwade             #+#    #+#             */
/*   Updated: 2017/07/18 23:14:17 by jpickett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 1

typedef struct s_line
{
	struct	s_line	next;
	void	*data;
}				t_line;

typedef	struct	s_coord
{
	int		x;
	int		y;
}				t_coord;

typedef struct 	s_llen
{
	int		len;
	void	*data;
}				l_llen;

l_llen	*ft_create_elem(void *data)
{
	l_llen	*newline;

	newline = malloc(sizeof(newline));
	newline->data = data;
	return(newline);
}

/*
**	BSQ
**	Read file to variable
*/

void	ft_list_push_front(t_line **new_line, void *data)
{
	t_line *index;

	index = ft_create_elem(data);
	if (index)
		{
			index->next = *new_line;
			*new_line = index;
		}
}

int		ft_nlines(char *str)
{
	int		n;

	n = 0;
	while (*str)
		if (*str++ == '\n')
			n++;
	return (n);
}

void	proc_first(char *c)
{
	if (c >= '0' && c <= '9')
		
}

void	ft_bsq(char *m)
{
	int 	fd;
	int		nlines;
	char	*buf[BUF_SIZE + 1];

	nlines = 0;
	fd = open(m, O_RDONLY);
	while (read(fd, buf, BUF_SIZE))
	{
		if (nlines == 0)
		{

		}
		buf = '\0'
		nlines = nlines + ft_nlines(buf);
	}
	
}
