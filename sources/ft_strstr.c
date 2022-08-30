/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:35:08 by jfremond          #+#    #+#             */
/*   Updated: 2022/04/26 14:59:46 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;
	int	c;

	a = ft_strlen(str);
	b = ft_strlen(to_find);
	c = 0;
	if (to_find[0] == '\0' || b == 0)
		return (str);
	while (c < a)
	{
		if (ft_strncmp(&str[c], to_find, b) == 0)
			return (str + c);
		c++;
	}
	return (0);
}
