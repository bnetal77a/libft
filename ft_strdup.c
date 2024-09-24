/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:24:49 by yalazrek          #+#    #+#             */
/*   Updated: 2024/09/22 01:52:01 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*new_str;

	size = ft_strlen(src);
	new_str = (char *) malloc(size * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		new_str[i] = src[i];
		i++;
	}
	return (new_str);
}
