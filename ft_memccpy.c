/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:38:31 by mohben-t          #+#    #+#             */
/*   Updated: 2024/09/26 21:38:31 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
    if (!d || !s)
		return (NULL);
    
	while (i < n)
	{
		((char *)d)[i] = ((char *)s)[i];
		if (((char *)s)[i] == (char)c)
			return ((void *)((char *)d + i));
		i++;
	}
	return ((void *)NULL);
}