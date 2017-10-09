/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuery <sjuery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 17:01:53 by sjuery            #+#    #+#             */
/*   Updated: 2017/09/22 21:52:35 by sjuery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int mnb;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		mnb = -nb;
	}
	else
		mnb = nb;
	if (mnb >= 10)
	{
		ft_putnbr_fd(mnb / 10, fd);
		ft_putnbr_fd(mnb % 10, fd);
	}
	else if (mnb < 10)
	{
		ft_putchar_fd(mnb + '0', fd);
	}
}
