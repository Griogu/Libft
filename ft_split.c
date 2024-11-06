/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:32:19 by mpendilh          #+#    #+#             */
/*   Updated: 2024/10/21 19:05:17 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	unsigned int	i;
	unsigned int	count_word;
	unsigned int	is_in_word;

	i = 0;
	count_word = 0;
	is_in_word = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != c && is_in_word == 0)
		{
			count_word++;
			is_in_word = 1;
		}
		if (s[i] == c && is_in_word == 1)
			is_in_word = 0;
		i++;
	}
	return (count_word);
}

static char	*ft_parsing(const char *s, char c, int j)
{
	char			*res;
	unsigned int	i;
	int				size_of;

	i = 0;
	size_of = 0;
	while (s[j + size_of] != c && s[j + size_of])
		size_of++;
	res = malloc(sizeof(char) * size_of + 1);
	if (!res)
		return (NULL);
	while (s[i + j] != c && s[i + j] != '\0')
	{
		res[i] = s[i + j];
		i++;
	}
	res[i] = '\0';
	return (res);
}

static void	*ft_free(char **res, int i)
{
	while (i >= 0)
		free(res[i--]);
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	if (!s && !c)
		return (NULL);
	i = 0;
	j = 0;
	result = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!result)
		return (NULL);
	while (i < ft_count_words(s, c))
	{
		while (s[j] == c && s[j] != '\0')
			j++;
		result[i] = ft_parsing(s, c, j);
		if (!result[i])
			return (ft_free(result, i));
		while (s[j] != c && s[j] != '\0')
			j++;
		i++;
	}
	result[i] = 0;
	return (result);
}
