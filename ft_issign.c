/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issign.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apolo-to <apolo-to@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:48:38 by apolo-to          #+#    #+#             */
/*   Updated: 2023/09/30 12:56:01 by apolo-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * This ft checks if the char is '+' sign or '-' sign.
 * @param	int c	: Character.
 * @return	int		: (1) Sign, (0) No sign.
*/
int	ft_issign(int c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}
