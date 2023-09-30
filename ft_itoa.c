/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:40:01 by apolo-to          #+#    #+#             */
/*   Updated: 2023/09/30 15:21:29 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This ft transform a int number to char.
*/
static void	ft_num_to_char(long num, char *res, size_t *i)
{
	if (num > 9)
	{
		ft_num_to_char(num / 10, res, i);
		ft_num_to_char(num % 10, res, i);
	}
	else
	{
		res[*i] = num + '0';
		(*i)++;
	}
}

/**
 * This ft transform an int number to an string number to print. 
 * @param	int n	: The number.
 * @return	char*	: A pointer to the str.
*/
char	*ft_itoa(int n)
{
	char	*res;
	long	num;
	size_t	i;

	num = n;
	res = malloc(sizeof(char) * (ft_numlen(num) + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	if (num < 0)
	{
		res[i] = '-';
		num = num * -1;
		i++;
	}
	ft_num_to_char(num, res, &i);
	res[i] = '\0';
	return (res);
}
