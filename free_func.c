/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:49:45 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/14 15:36:47 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **tav)
{
	int	i;

	i = 0;
	if (tav != NULL)
	{
		while (tav[i] != NULL)
		{
			free(tav[i]);
			i++;
		}
		free(tav);
	}
}

void	free_func(char **str, t_stack *a, t_stack *b)
{
	ft_free(str);
	free(a->data);
	free(b->data);
	free(a);
	free(b);
}

int	*free_arg(char **str, int *dtr)
{
	ft_free(str);
	free(dtr);
	return (false);
}

int	free_arg2(char **tmp, int k)
{
	free(tmp);
	k = 0;
	return (k);
}
