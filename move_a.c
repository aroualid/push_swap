/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:43:38 by aroualid          #+#    #+#             */
/*   Updated: 2024/02/14 11:57:48 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack* a)
{
	if(a->size <= 2)
		return ;
	ft_swap(&a->data[0], &a->data[1]);
	write(1, "sa\n", 3);
}

void	ft_pa(t_stack *a, t_stack *b)
{
	int	temp;
	if (b->size == 0)
		return ;
	temp = b->data[0];
	ft_memmove(b->data, b->data + 1, b->size); 
	b->size--;
	ft_memmove(a->data + 1, a->data, a->size);
	a->data[0] = temp;
	a->size++;
	write(1, "pa\n", 3); 
}

void	ft_ra(t_stack *a)
{
	int	temp;

	temp = a->data[0];
	ft_memmove(a->data, a->data + 1, a->size - 1);
	a->data[a->size - 1] = temp;
	write(1, "ra\n", 3);
}

void	ft_rra(t_stack *a)
{
	int	temp;

	temp = a->data[a->size - 1];
	ft_memmove(a->data + 1, a->data, a->size - 1);
	a->data[0] = temp;
	write(1, "rra\n", 4);
}
