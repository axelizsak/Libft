#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

int         ft_atoi(char *s);
int         ft_isalnum(int c);
int         ft_isalpha(int c);
int         ft_isascii(int c);
int         ft_isdigit(int c);
int         ft_tolower(int c);
int         ft_isprint(int c);
int         ft_toupper(int c);
int         ft_strlen(char *s);
void    *ft_memset(void *s, int c, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
char    *ft_strdup(const char *s1);
int         ft_strncmp(const char *s1, const char *s2, size_t n);
void    ft_bzero(void *s, size_t n)
#endif