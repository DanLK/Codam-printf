/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printd.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dloustal <dloustal@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/25 12:06:18 by dloustal      #+#    #+#                 */
/*   Updated: 2024/11/28 16:34:07 by dloustal      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printd(int x)
{
	long	num;
	char	buffer[11];
	char	*str;

	num = x;
	str = buffer + 11;
	if (x < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	*--str = '\0';
	if (x == 0)
		*--str = '0';
	while (num > 0)
	{
		*--str = num % 10 + '0';
		num /= 10;
	}
	ft_putstr_fd(str, 1);
	if (x < 0)
		return (ft_strlen(str) + 1);
	return (ft_strlen(str));
}

// int	ft_printd_original(int x)
// {
// 	long	num;
// 	int		count;
// 	char	buffer[11];
// 	char	*str;

// 	num = x;
// 	count = 0;
// 	str = buffer + 11;
// 	if (x < 0)
// 	{
// 		write(1, "-", 1);
// 		num = -num;
// 	}
// 	*--str = '\0';
// 	if (x == 0)
// 	{
// 		*--str = '0';
// 		count++;
// 	}
// 	while (num > 0)
// 	{
// 		*--str = num % 10 + '0';
// 		count++;
// 		num /= 10;
// 	}
// 	printf("-------%d------\n", ft_strlen(str));
// 	write(1, str, count);
// 	if (x < 0)
// 		count++;
// 	return (count);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	printf("\nBytes printed: %d\n", ft_printd(0)); 
// 	// printf("%d\n", 2147483647);
// 	return (0);
// }