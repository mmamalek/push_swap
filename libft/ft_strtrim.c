/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:54:35 by mmamalek          #+#    #+#             */
/*   Updated: 2019/06/15 03:50:07 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;
	char	*s2;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (ft_isspace(*s))
		s++;
	len = i;
	while (s[i++])
	{
		while (s[i] && !ft_isspace(s[i]))
			i++;
		len = i;
		while (s[i] && ft_isspace(s[i]))
			i++;
	}
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
		return (NULL);
	else
		ft_strncpy(s2, s, len);
	s2[len] = '\0';
	return (s2);
}
