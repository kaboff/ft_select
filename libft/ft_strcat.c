/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-floc <ale-floc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:31:20 by ale-floc          #+#    #+#             */
/*   Updated: 2014/11/10 21:07:06 by ale-floc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int p;

	i = 0;
	p = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[p] != '\0')
	{
		s1[i] = s2[p];
		p++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
