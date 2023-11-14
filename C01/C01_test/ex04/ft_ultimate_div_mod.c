/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaravil <emaravil@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 20:14:52 by emaravil          #+#    #+#             */
/*   Updated: 2023/10/30 13:26:46 by emaravil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	n1;
	int	n2;

	n1 = *a;
	n2 = *b;

	*a = n1 / n2;
	*b = n1 % n2;
}
