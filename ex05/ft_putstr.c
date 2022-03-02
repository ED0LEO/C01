/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlothair <mlothair@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 20:55:26 by mlothair          #+#    #+#             */
/*   Updated: 2021/09/03 22:34:05 by mlothair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	iter;
	int	size;

	iter = 0;
	size = (&str)[1] - str;
	while (iter < size)
	{
		write(1, &str[iter], 1);
		iter++;
	}
	return ;
}
