/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 11:57:28 by gcyndi            #+#    #+#             */
/*   Updated: 2021/03/10 19:08:01 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	(void)argc;
	char *out;
	out = ft_open_file(argv[1]);
	write(1, out, BUFFER);
	return (0);
}
