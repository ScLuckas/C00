/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscariot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/19 13:12:46 by lscariot          #+#    #+#             */
/*   Updated: 2015/07/19 17:45:27 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_show(int **tab);
int 	ft_verif_ligne(int **tab, int y, int value);
int		ft_verif_colonne(int **tab, int x, int value);
int		ft_verif_bloc(int **tab, int y, int x, int value);

int		**ft_resolve(int **tab, int position)
{
	int value;
	int x;
	int y;

	value = 1;
	x = position % 9;
	y = position / 9;
	if (tab[x][y] != 0)
	{
		ft_resolve(tab, position + 1);
		return (tab);
	}
	while (value <= 9)
	{
		if (ft_verif_ligne(tab, y, value) 
				&& ft_verif_colonne(tab, x, value) 
				&& ft_verif_bloc(tab, y, x, value))
		{
			tab[x][y] = value;
			ft_resolve(tab, position + 1);
		}
		value++;
	}
	return (tab);
}
