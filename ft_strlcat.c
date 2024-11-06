/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:21:19 by mpendilh          #+#    #+#             */
/*   Updated: 2024/10/12 14:16:37 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	if (dst == NULL && size == 0)
		return (ft_strlen(src) + size);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && len_dst + i + 1 < size && size != 0)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	if (len_dst > size)
		return (len_src + size);
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
