/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:32:12 by aroualid          #+#    #+#             */
/*   Updated: 2024/03/11 13:45:37 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av) 
{
	char **str = NULL;
	t_stack *a = ft_calloc(sizeof(t_stack), 1);
	t_stack *b = ft_calloc(sizeof(t_stack), 1);
	int k = 0;
	int j = 0;
	int	i;
	
	str = check_arg(ac, av, &j);
	a->size = j;
	b->size = 0;
	a->data = check_good_arg(ac, av);
	b->data = ft_calloc(sizeof(int), j);
	i = a->size;
	if (a->data == NULL)
        return (1);
	else
    {
        if (pars(a->data, ac, av) == false)
            return (false);
	}
	printf ("#####stack a before sort######\n");
	while (k < i)
	{
		printf("[%d] ", a->data[k]);
		k++;
	}
	printf("\n");
	if (j == 2)
		two_arg(a);
	else if (j == 3)
		three_arg(a);
	else 
	{	
		push_two(a, b);
		apply_sort(a,b);
	}
	printf("\n\n\n#####stack a after sort#####\n");
	for (int i = 0; i < a->size; i++)
		printf("[%d] ", a->data[i]);
	printf("\n#####stack b after sort#####\n");
	for (int i = 0; i < b->size; i++)
		printf("[%d] ", b->data[i]);
}
