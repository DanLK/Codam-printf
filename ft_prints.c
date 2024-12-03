/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_prints.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dloustal <dloustal@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/25 11:44:30 by dloustal      #+#    #+#                 */
/*   Updated: 2024/12/03 14:15:07 by dloustal      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prints(char *str)
{
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

// #include <stdio.h>

// int	main(void)
// {
// 	// char	s[] = "";

// 	printf("%s\n", (char *)NULL);
// 	printf("\n");
// 	printf("\nBytes printed: %d\n", ft_prints(NULL));
// 	return (0);
// }