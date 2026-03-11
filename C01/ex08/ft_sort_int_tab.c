/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmezgoli <wmezgoli@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 21:42:31 by wmezgoli          #+#    #+#             */
/*   Updated: 2026/03/11 21:56:18 by wmezgoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	y;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		y = 0;
		while (y < size - 1 - y)
		{
			if (tab[y] > tab[y] + 1)
			{
				temp = tab[y];
				tab[y] = tab[y + 1];
				tab[y + 1] = temp;
			}
			y++;
		}
		i++;
	}
}
