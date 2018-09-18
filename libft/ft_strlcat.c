/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldamulel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 19:34:22 by ldamulel          #+#    #+#             */
/*   Updated: 2017/06/10 13:16:30 by ldamulel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t s2_len;
	size_t s1_len;

	s2_len = ft_strlen(s2);
	s1_len = ft_strlen(s1);
	if (n < s1_len + 1)
		return (n + s2_len);
	if (n == s1_len + 1)
		return (s1_len + s2_len);
	ft_memcpy(s1 + s1_len, s2, n - s1_len - 1);
	s1[n - 1] = '\0';
	return (s1_len + s2_len);
}
