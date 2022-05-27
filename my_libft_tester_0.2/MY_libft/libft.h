/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmensing <mmensing@wolfsburg.42student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:47:25 by mmensing          #+#    #+#             */
/*   Updated: 2022/05/27 21:58:48 by mmensing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# include <strings.h>
# include <stddef.h>
# include <unistd.h>
# include <string.h>

void    my_bzero(void *str, size_t n);
void    *my_calloc(size_t nitems, size_t size);
void    *my_memchr(const void *str, int c, size_t n);
void    *my_memcpy(void *dest, const void *src, size_t n);
void    *my_memmove(void *str1, const void *str2, size_t n);
void    *my_memset(void *str, int c, size_t n);

int     my_atoi(const char *str);
int     my_isalnum(int val);
int     my_isalpha(int val);
int     my_isascii(int val);
int     my_isdigit(int val);
int     my_isprint(int val);
int     my_memcmp(const void *str1, const void *str2, size_t n);
size_t		my_strlen (const char *str);
int     my_strncmp(const char *s1, const char *s2, size_t n);
int     my_tolower(int c);
int     my_toupper(int c);

size_t     my_strlcpy(char *dst, const char *src, size_t size);
size_t     my_strlcat(char *dst, const char *src, size_t size);

char    *my_strchr(const char *str, int c);
char    *my_strrchr(const char *str, int c);
char    *my_strnstr(const char *str1, const char *str2, size_t len);
char    *my_strdup(char *src);

// PART 2
char *my_strjoin(char const *s1, char const *s2);
char *my_substr(char const *s, unsigned int start, size_t len);

char *my_strtrim(char const *s1, char const *set);
char *my_itoa(int n);

char *my_strmapi(char const *s, char (*f)(unsigned int, char));
void my_striteri(char *s, void (*f)(unsigned int, char*));
void my_putchar_fd(char c, int fd);
void my_putstr_fd(char *s, int fd);
void my_putendl_fd(char *s, int fd);
void my_putnbr_fd(int n, int fd);
//int  ft_split(char const *s, char c);
char **my_split(char const *s, char c);


//BONUS

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

t_list *my_lstnew(void *content);
void my_lstadd_front(t_list **lst, t_list *new);
int my_lstsize(t_list *lst);
t_list *my_lstlast(t_list *lst);
void my_lstadd_back(t_list **lst, t_list *new);
void my_lstdelone(t_list *lst, void (*del)(void *));
void my_lstclear(t_list **lst, void (*del)(void *));
void my_lstiter(t_list *lst, void (*f)(void *));
t_list *my_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif