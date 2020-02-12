#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef	struct	s_list
{
	void	*data;
	struct	s_list	*next;
}	t_list;

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_bzero(void *str, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *src, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_strcat(char *dest, const char *src);

int	ft_memcmp(const void *s1, const void *s2, size_t n);

size_t	ft_strlen(const char *str);

char	*ft_strchr(const char *src, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strdup(const char *str);
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);

#endif
