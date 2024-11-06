/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:19:01 by mpendilh          #+#    #+#             */
/*   Updated: 2024/10/16 16:31:46 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_res;
	char	*res;

	i = 0;
	len_res = 0;
	if ((s + start) > (s + ft_strlen(s)))
		return (ft_strdup(""));
	len_res = len;
	if (len > ft_strlen(s + start))
		len_res = ft_strlen(s + start);
	res = malloc(sizeof(char) * (len_res + 1));
	if (!res)
		return (NULL);
	while (i < len && ((char *)s)[start + i] != '\0')
	{
		res[i] = ((char *)s)[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
