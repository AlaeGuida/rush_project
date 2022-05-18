/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabelaar <sabelaar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:16:50 by sabelaar          #+#    #+#             */
/*   Updated: 2022/05/17 13:03:15 by sabelaar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	alpha(int ln, char begin, char second, char last)
{
	int		x_counter;

	x_counter = 1;
	while (x_counter <= ln)
	{
		if (x_counter == 1)
			ft_putchar(begin);
		else if (x_counter == ln)
			ft_putchar(last);
		else
			ft_putchar(second);
		x_counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		y_counter;

	y_counter = 1;
	if (x <= 0 || y <= 0)
		write(1, "Please enter a value higher than 0", 34);
	if (x >= 1 && y >= 1)
	{
		while (y_counter <= y)
		{
			if (y_counter == 1 || y_counter == y)
				alpha(x, 'A', 'B', 'C');
			else
				alpha(x, 'B', ' ', 'B');
			y_counter++;
		}
	}
}
