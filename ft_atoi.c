/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 20:51:55 by mohben-t          #+#    #+#             */
/*   Updated: 2024/09/22 01:51:17 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i])
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		{
			i++;
		}
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i++] == '-')
				sign = -sign;
		}
		while (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i++] - '0');
		break ;
	}
	return (result * sign);
}
