/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpalyvod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 17:22:50 by vpalyvod          #+#    #+#             */
/*   Updated: 2016/12/15 15:09:28 by vpalyvod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define TAB(x)(x == ' ' || x == '\t' || x == '\n')
# define TAB2(x)(x == '\f' || x == '\v' || x == '\r')

# include <stdlib.h>
# include <string.h>

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list1;

size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *str);
char				*ft_strcpy(char *str, const char *strcop);
char				*ft_strncpy(char *str, const char *strcop, size_t num);
char				*ft_strcat(char *str1, const char *str2);
char				*ft_strncat(char *str, const char *newst, size_t num);
size_t				ft_strlcat(char *str1, const char *str2, size_t size);
char				*ft_strchr(const char *str, int sym);
char				*ft_strrchr(const char *str, int sym);
char				*ft_strstr(const char *str1, const char *str2);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int sym);
int					ft_tolower(int str);
int					ft_toupper(int str);
int					ft_isdigit(int sym);
int					ft_isalnum(int sym);
int					ft_isascii(int sym);
int					ft_isprint(int sym);
void				*ft_memset(void *str, int val, size_t num);
void				*ft_bzero(void *str, size_t num);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *s1, const void *s2, int c, size_t num);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t num);
int					ft_memcmp(const void *s1, const void *s2, size_t num);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char*));
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned in, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
t_list1				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list1 **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list1 **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list1 **alst, t_list1 *new);
void				ft_lstiter(t_list1 *lst, void (*f)(t_list1 *elem));
t_list1				*ft_lstmap(t_list1 *lst, t_list1 *(*f)(t_list1 *elem));
int					ft_factorial(int num);
int					ft_fibonacci(int index);
char				*ft_mixcase(char *str);
int					ft_sqrt(int nb);
double				ft_calc(float n1, char i, float n2);
#endif
