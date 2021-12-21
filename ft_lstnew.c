/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kel-amra <kel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:56:16 by kel-amra          #+#    #+#             */
/*   Updated: 2021/11/19 16:51:15 by kel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*frst;

	frst = (t_list *)malloc(sizeof(t_list));
	if (!frst)
		return (NULL);
	frst->content = content;
	frst->next = NULL;
	return (frst);
}
