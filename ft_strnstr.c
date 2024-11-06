/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:28:21 by mpendilh          #+#    #+#             */
/*   Updated: 2024/10/12 12:54:09 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	unsigned int	size;

	i = 0;
	size = 0;
	while (little[size] != '\0')
		size++;
	if (size == 0)
		return ((char *)big);
	while (*big != '\0' && ft_strncmp(big, little, size) != 0 && i < len)
	{
		big++;
		i++;
	}
	if (*big != '\0' && i + size <= len)
		return ((char *)big);
	return (NULL);
}
