/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prop-bsq.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwade <vwade@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 14:03:46 by vwade             #+#    #+#             */
/*   Updated: 2017/07/18 15:32:22 by vwade            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 42

typedef struct  s_coord
{
    int         x;
    int         y;
}               t_coord;

/*
**  BSQ
**  Read file to variable
*/

t_coord     ft_getdim(char *str)
{
    t_coord     n;

    n->x = 0;
    n->y = 0;
    while (*str != '\0')
        
        if (*str++ == '\n')
            n->y++;
    return (n);
}

void    ft_bsq(char *m)
{
    int     fd;
    t_coord     nlines;
    char    *buf[BUF_SIZE + 1];

    nlines = 0;
    fd = open(m, O_RDONLY);
    while (read(fd, buf, BUF_SIZE)
            nlines = nlines + ft_nlines(buf);
}