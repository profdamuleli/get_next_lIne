/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamulel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 10:19:39 by ldamulel          #+#    #+#             */
/*   Updated: 2017/06/23 10:19:43 by ldamulel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		j;

	dst = (char*)malloc(sizeof(*dst) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dst)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
	{
		dst[i] = s1[j];
		j++;
		i++;
	}
	j = 0;
	while (s2[j])
	{
		dst[i] = s2[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
