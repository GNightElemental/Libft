/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuery <sjuery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:41:14 by sjuery            #+#    #+#             */
/*   Updated: 2017/09/21 14:14:14 by sjuery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	is_neg;
	int	num;

	is_neg = 0;
	num = 0;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n')
		|| (*str == '\v') || (*str == '\f') || (*str == '\r'))
		str++;
	if (*str == 45)
		is_neg = 1;
	if ((*str == 45) || (*str == 43))
		str++;
	while ((*str >= 48) && (*str <= 57))
	{
		num *= 10;
		num += ((int)*str - 48);
		str++;
	}
	if (is_neg)
		return (-num);
	else
		return (num);
}
