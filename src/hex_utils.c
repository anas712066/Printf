/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:32:06 by mumajeed          #+#    #+#             */
/*   Updated: 2024/12/17 16:18:15 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_puthex(unsigned int num, char format)
{
	char	*hex_base;

	if (format == 'x')
		hex_base = "0123456789abcdef";
	else
		hex_base = "0123456789ABCDEF";
	if (num >= 16)
		return (ft_puthex(num / 16, format) + ft_putchar(hex_base[num % 16]));
	return (ft_putchar(hex_base[num % 16]));
}

int	ft_putptr(unsigned long ptr)
{
	int	len;

	len = ft_putstr("0x");
	len = ft_puthex(ptr, x);
	return (len);
}
