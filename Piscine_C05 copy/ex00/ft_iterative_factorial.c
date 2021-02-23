/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcyndi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 12:15:50 by gcyndi            #+#    #+#             */
/*   Updated: 2021/02/23 13:12:14 by gcyndi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int tmp;

	if (nb < 0)
	{
		return (0);
	}
	tmp = 1;
	while (nb != 0)
	{
		tmp = tmp * nb;
		nb--;
	}
	return (tmp);
}
