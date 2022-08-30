/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 03:51:42 by jfremond          #+#    #+#             */
/*   Updated: 2022/04/26 15:00:23 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	int	i;
	int	j;
	int	tmp;

	i = -1;
	j = ft_strlen(s);
	while (++i < --j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
	return (s);
}
