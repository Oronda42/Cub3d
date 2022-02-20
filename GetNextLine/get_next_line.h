/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oronda <oronda@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 11:23:32 by oronda            #+#    #+#             */
/*   Updated: 2022/02/19 10:52:27 by oronda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
 char	*ft_gnl_strdup(char *s);
 size_t	ft_gnl_strlen(const char *s);
 char	*ft_gnl_strjoin(char *s1, char *s2);
 char	*ft_gnl_substr(char *s, unsigned int start, size_t len);
 size_t	ft_gnl_strlcpy(char *dst, const char *src, size_t size);

#endif