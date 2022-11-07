/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slipt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aizsak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:44:15 by aizsak            #+#    #+#             */
/*   Updated: 2022/11/07 14:21:46 by aizsak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	sep(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count(char *str, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (str[i])
	{
		while (str[i] && sep(str[i], c))
			i++;
		if (str[i])
			j++;
		while (str[i] && !sep(str[i], c))
			i++;
	}
	return (j);
}

char	*word(char *str, char c)
{
	int		i;
	int		s;
	char	*tab;

	i = 0;
	s = 0;
	while (str[i] && !sep(str[i], charset))
	{
		i++;
		s++;
	}
	tab = malloc(sizeof(char) * s + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (str[i] && !sep(str[i], c))
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	*str;
	char	**tab;

	j = count(s, c);
	tab = malloc(sizeof(char *) * j + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (*s && i < j)
	{
		while (*s && sep(*s, c))
			s++;
		if (*s && !sep(*s, charset))
		{
			str = word(s, charset);
			tab[i] = malloc(sizeof(char) * ft_strlen(str) + 1);
			tab[i] = str;
			i++;
			s = s + ft_strlen(str);
		}
	}
	tab[j] = NULL;
	return (tab);
}
