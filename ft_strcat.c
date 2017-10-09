/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuery <sjuery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 19:06:56 by sjuery            #+#    #+#             */
/*   Updated: 2017/09/21 12:04:58 by sjuery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	char *tstr1;

	tstr1 = str1;
	while (*tstr1)
		tstr1++;
	while (*str2)
		*tstr1++ = *str2++;
	*tstr1 = '\0';
	return (str1);
}
