/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuery <sjuery@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 14:52:25 by sjuery            #+#    #+#             */
/*   Updated: 2017/09/21 12:35:32 by sjuery           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t len)
{
	char *tstr1;

	tstr1 = str1;
	while (*tstr1)
		tstr1++;
	while (*str2 && len-- > 0)
		*tstr1++ = *str2++;
	*tstr1 = '\0';
	return (str1);
}
