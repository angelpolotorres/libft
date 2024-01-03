/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 20:07:27 by apolo-to          #+#    #+#             */
/*   Updated: 2023/09/30 13:15:33 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft transform a string of digits to a integer. 
 * The symbol '-' is interpreted like a negative number.
 * @param	const_char* str		: A string of digits.
 * @return	int					: An (+-)integer. If it fails, it returns zero. 
*/
int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (ft_issign(str[i]))
	{
		if (!ft_isdigit(str[i + 1]))
			return (0);
		if (str[i] == '-')
			sign = -1;
		i ++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
