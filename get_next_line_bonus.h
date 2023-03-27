/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okushnir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 17:01:33 by okushnir          #+#    #+#             */
/*   Updated: 2021/06/06 14:24:19 by okushnir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

int		get_next_line(int fd, char **line);
char	*check_ost(char *ost, char **line);
void	make_line(char *ost, char **p_n, char **line, char *buf);
char	*ft_strnew(int count);
size_t	ft_strlen(const char *s);
void	ft_putchar_fd(int fd, char c);
void	ft_putchar( char c);
void	ft_putstr(char *str);
void	ft_putstr_fd(int fd, char *str);
void	ft_putnbr(int nb);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strcpy(char *dst, const char *src);
void	ft_strclr(char *s);

#endif
