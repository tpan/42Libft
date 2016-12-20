/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlength.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:02:45 by tpan              #+#    #+#             */
/*   Updated: 2016/12/19 17:02:24 by tpan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordlength(char *str, int i, int delimiter)
{
	size_t len;

	len = 0;
	while (str[i] != '\0' && str[i] != delimiter)
	{
		i++;
		len++;
	}
	return (i);
}
