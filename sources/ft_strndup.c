/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 21:57:16 by jfremond          #+#    #+#             */
/*   Updated: 2022/03/27 11:33:40 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*res;

	res = (char *)malloc(sizeof(*res) * (n + 1));
	if (!res)
		return (NULL);
	res[n] = '\0';
	while (n--)
		res[n] = s[n];
	return (res);
}
