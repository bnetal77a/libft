/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:28:20 by mohben-t          #+#    #+#             */
/*   Updated: 2024/09/21 23:23:39 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	if (str[count] == '\0')
		return (1);
	while (str[count])
	{
		if ((str[count] >= '0' && str[count] <= '9'))
			count++;
		else
			return (0);
	}
	return (1);
}
