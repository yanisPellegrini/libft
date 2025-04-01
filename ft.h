/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypellegr <ypellegr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 11:20:53 by elandi            #+#    #+#             */
/*   Updated: 2025/04/01 08:46:54 by ypellegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stddef.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

#endif