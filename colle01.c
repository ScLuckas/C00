/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscariot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/18 13:22:41 by lscariot          #+#    #+#             */
/*   Updated: 2015/07/19 17:45:30 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_show(int **tab);
int		**ft_resolve(int **tab, int position);

int		main(int argc, char **argv)
{
	int **tab;
	int **base;
	int v;
	int h;

	tab = (int**)malloc(sizeof(int*) * 9);
	v = 0;
	while (v < 9)
	{
		tab[v] = (int*)malloc(sizeof(int) * 9);
		v++;
	}
	v = 1;
	h = 0;
	while (v <= argc - 1)
	{
		h = 0;
		while (h < 9)
		{
			if (argv[v][h] == '.')
			{
				tab[v - 1][h] = 0;
				base[v - 1][h] = 0;
			}
			else
			{
				tab[v - 1][h] = argv[v][h] - '0';
				base[v - 1][h] = argv[v][h] - '0';
			}
			h++;
		}
		v++;
	}
	ft_show(ft_resolve(tab, 0));
	return (0);
}
