/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lowerhex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamohame <aamohame@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:54:30 by aamohame          #+#    #+#             */
/*   Updated: 2023/12/28 13:20:58 by aamohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_print_lowerhex(unsigned int n)
{
	char	*hex_digits;
	size_t	total_length;

	hex_digits = "0123456789abcdef";
	total_length = 0;
	if (n >= 16)
		total_length += ft_print_lowerhex(n / 16);
	total_length += ft_putchar(hex_digits[n % 16]);
	return (total_length);
}
