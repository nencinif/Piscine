/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:35:54 by user              #+#    #+#             */
/*   Updated: 2022/11/17 15:08:23 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	z;

	z = 122;
	while (z != 96)
	{
		write(1, &z, 1);
		z--;
	}
}
int main (void)
{ ft_print_reverse_alphabet(); return(0); }
