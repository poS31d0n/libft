/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscot <sscot@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:20:58 by sscot             #+#    #+#             */
/*   Updated: 2021/10/23 21:55:13 by sscot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	l;
	long int	a;

	l = 0;
	a = 1;
	while ((*str == ' ') || (*str == '\f') || (*str == '\n')
		|| (*str == '\r') || (*str == '\t') || (*str == '\v'))
		   str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			a *= -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		if (l * a > 2147483647)
			return (-1);
		if (l * a < -2147483648)
			return (0);
		l = l * 10 + ((int)*str - '0');
		str++;
	}
	return (l * a);
}
