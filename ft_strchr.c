/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:01:18 by mpendilh          #+#    #+#             */
/*   Updated: 2024/10/12 12:44:16 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s[0] == '\0' && (char)c == '\0')
		return ((char *)s);
	while (s[i] != '\0')
	{
		if (s[i] == ((char) c))
			return ((char *) s + i);
		if (s[i + 1] == (char)c)
			return ((char *)s + i + 1);
		i++;
	}
	return (NULL);
}
