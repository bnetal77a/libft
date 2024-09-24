/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:27:06 by mohben-t          #+#    #+#             */
/*   Updated: 2024/09/24 15:27:06 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, int len)
{
	int	i;
	int	len_str;
	int	len_find;

	len_str = ft_strlen(haystack);
	len_find = ft_strlen(needle);
	i = 0;
	if (len_find == 0)
		return (haystack);
	while (i <= len_str - len_find && i < len)
	{
		if (ft_strncmp(haystack + i, needle, len_find) == 0)
			return (haystack + i);
		i++;
	}
	return ((char *)NULL);
}
