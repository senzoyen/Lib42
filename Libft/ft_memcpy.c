/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agokdag <agokdag@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:50:12 by agokdag           #+#    #+#             */
/*   Updated: 2023/07/18 14:50:16 by agokdag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst_tmp;
	char	*src_tmp;

	i = 0;
	dst_tmp = (char *)dest;
	src_tmp = (char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		dst_tmp[i] = src_tmp[i];
		i++;
	}
	return (dest);
}
