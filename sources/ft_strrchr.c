/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 00:11:53 by jfremond          #+#    #+#             */
/*   Updated: 2022/08/30 12:39:50 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len != 0 && s[len] != c)
		len--;
	if (s[len] == c)
		return ((char *)&s[len]);
	return (NULL);
}

int		is_in_str(char *str, char c)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] == c)
			res = 1;
		i++;
	}
	return (res);
}