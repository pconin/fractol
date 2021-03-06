/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pconin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 14:58:03 by pconin            #+#    #+#             */
/*   Updated: 2015/12/11 15:04:11 by pconin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int x;

	x = 0;
	if (nb <= 0)
		return (0);
	while (x * x < nb)
		x++;
	if (x * x == nb)
		return (x);
	else
		return (0);
}
