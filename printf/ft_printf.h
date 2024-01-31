/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:40:58 by jewlee            #+#    #+#             */
/*   Updated: 2023/11/23 17:13:55 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *format, ...);
int		printf_c(char c, int len);
int		printf_s(char *s, int len);
int		printf_u(unsigned int num, int len);
int		printf_hex(unsigned int num, char c, int len);
int		printf_p(void *ptr, int len);

char	*ft_itoa(int num);

#endif