/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumajeed <mumajeed@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:23:16 by mumajeed          #+#    #+#             */
/*   Updated: 2024/12/16 12:50:31 by mumajeed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[len])
		ft_putchar(s[len++]);
	return (len);
}

int	ft_putnbr(int n)
{
	char	*num;
	int		len;

	num = ft_itoa(n);
	len = ft_putstr(num);
	free(num);
	return (len);
}
