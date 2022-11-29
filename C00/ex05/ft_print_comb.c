/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:50:52 by user              #+#    #+#             */
/*   Updated: 2022/11/18 15:56:35 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	stampa ( int a, int b, int c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;
	
	a = '0';
	while (a <= '7')
	{
		b = (a + 1);
		while (b <= '8')
		{
			c = (b + 1);
			while (c <= '9')
			{
				stampa(a, b, c);
				c++;
			}
		b++;
		}

	a++;
	}
}
int main(void)
{
	ft_print_comb();
	return 0;
}
