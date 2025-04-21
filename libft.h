/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:32:47 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/16 14:25:12 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *string);
void	*ft_memset(void *target, int value, size_t length);
void	ft_bzero(void *target, size_t length);
void	*ft_memcpy(void *target, const void *source, size_t length);
void	*ft_memmove(void *target, const void *source, size_t length);
size_t	ft_strlcpy(char *target, const char *source, size_t size);
size_t	ft_strlcat(char *target, const char *source, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *str, int chr);
char	*ft_strrchr(const char *str, int chr);
int		ft_strncmp(const char *a, const char *b, size_t limit);
void	*ft_memchr(const void *data, int value, size_t length);
int		ft_memcmp(const void *a, const void *b, size_t length);
char	*ft_strnstr(const char *haystack, const char *needle, size_t length);
int		ft_atoi(const char *string);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *string);
char	*ft_substr(const char *string, unsigned int start, size_t length);
char	*ft_strjoin(const char *a, const char *b);
char	*ft_strtrim(const char *string, const char *set);
char	**ft_split(const char *string, char delimiter);
char	*ft_itoa(int number);
char	*ft_strmapi(const char *string, char (*func)(unsigned int, char));
void	ft_striteri(char *string, void (*func)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *string, int fd);
void	ft_putendl_fd(char *string, int fd);
void	ft_putnbr_fd(int number, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **list, t_list *node);
int		ft_lstsize(t_list *list);
t_list	*ft_lstlast(t_list *list);
void	ft_lstadd_back(t_list **list, t_list *node);
void	ft_lstdelone(t_list *list, void (*del)(void*));
void	ft_lstclear(t_list **list, void (*del)(void*));
void	ft_lstiter(t_list *list, void (*func)(void *));
t_list	*ft_lstmap(t_list *list, void *(*func)(void *), void (*del)(void *));

#endif
