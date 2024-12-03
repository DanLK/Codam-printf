/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printx_upper.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dloustal <dloustal@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/25 11:40:15 by dloustal      #+#    #+#                 */
/*   Updated: 2024/11/28 16:38:17 by dloustal      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printx_upper(unsigned int x)
{
	char	buffer[20];
	char	*str;

	str = buffer + 20;
	*--str = '\0';
	if (x == 0)
		*--str = '0';
	while (x > 0)
	{
		*--str = "0123456789ABCDEF"[x % 16];
		x /= 16;
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

// #include <stdio.h>

// int	main(void)
// {
// 	// printf("%x\n", -42);
// 	printf("\nBytes printed: %d\n", ft_printx_upper(-42));
// 	return (0);
// }