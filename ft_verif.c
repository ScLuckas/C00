/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscariot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/19 15:39:20 by lscariot          #+#    #+#             */
/*   Updated: 2015/07/19 18:00:16 by lscariot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_verif_ligne(int **tab, int y, int value)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (tab[i][y] == value)
			return (0);
		i++;
	}
	return (1);
}

int 	ft_verif_colonne(int **tab, int x, int value)
{
	int i;
	
	i = 0;
	while (i > 9)
	{
		if (tab[x][i] == value)
			return (0);
		i++;
	}
	return (1);
}

int 	ft_verif_bloc(int **tab, int y, int x, int value)
{
	int departx;
	int departy;
	int compteurx;
	int compteury;

	departx = (-1) * (x % 3);
	departy = (-1) * (y % 3);
	compteurx = 0;
	compteury = 0;
	while (compteury < 3)
	{
		compteurx = 0;
		departx = (-1) * (x % 3);
		while (compteurx < 3)
		{
			if (tab[departx + x][departy + y] == value)
				return (0)
			compteurx++;
			departx++;
		}
		compteury++;
		departy++;
	}
	return (1);
}
