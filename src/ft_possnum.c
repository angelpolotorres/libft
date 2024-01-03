/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_possnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:30:46 by apolo-to          #+#    #+#             */
/*   Updated: 2023/09/30 16:40:09 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft checks if a str is a potencial number accepted by ft_atoi.
 * @param	const_char* str	: The string.
 * @return	int				: (1) Accepted, (0) No accepted.
*/
int	ft_possnum(const char *str)
{
	int	i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (ft_issign(str[i]))
	{
		if (!ft_isdigit(str[i + 1]))
			return (0);
		i++;
	}
	if (!ft_isdigit(str[i]))
		return (0);
	return (1);
}
