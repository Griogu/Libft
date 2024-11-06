/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 01:36:37 by mpendilh          #+#    #+#             */
/*   Updated: 2024/10/14 09:22:37 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_cpy;
	size_t	len_s;
	int		i;

	i = 0;
	len_s = ft_strlen(s);
	s_cpy = malloc(len_s + 1);
	if (s_cpy == 0)
		return (NULL);
	while (s[i] != '\0')
	{
		s_cpy[i] = s[i];
		i++;
	}
	s_cpy[i] = '\0';
	return (s_cpy);
}
