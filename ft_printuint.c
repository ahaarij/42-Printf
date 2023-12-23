/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaarij <ahaarij@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:16:17 by ahaarij           #+#    #+#             */
/*   Updated: 2023/12/11 10:08:54 by ahaarij          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printuint(unsigned int c)
{
	int	digit;

	digit = 0;
	if (c > 9)
		digit += ft_printuint((c / 10));
	digit += ft_printchar((c % 10) + '0');
	return (digit);
}
