/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dloustal <dloustal@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/22 15:00:33 by dloustal      #+#    #+#                 */
/*   Updated: 2024/12/05 14:46:54 by dloustal      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include "libft/libft.h"
# include <stdarg.h>
# include <stdbool.h>
# include <stdint.h>

int	ft_printc(char c);

int	ft_prints(char *str);

int	ft_printp(void	*ptr);

int	ft_printd(int x);

int	ft_printu(unsigned int x);

int	ft_printx(unsigned int x, char spec);

int	ft_print_percent(void);

int	ft_printf(const char *format, ...);

#endif