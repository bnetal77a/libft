/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:07:42 by mohben-t          #+#    #+#             */
/*   Updated: 2024/09/04 15:34:27 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len_str;
	int	len_find;

	len_str = ft_strlen(str);
	len_find = ft_strlen(to_find);
	i = 0;
	if (len_find == 0)
		return (str);
	while (i <= len_str - len_find)
	{
		if (ft_strncmp(str + i, to_find, len_find) == 0)
			return (str + i);
		i++;
	}
	return ((char *)0);
}
