/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:02:14 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/11 21:04:47 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/**
 * @brief	Converts the initial portion of the string pointed to by 'str' to
 * 			integer representation.
 * 
 * @param str	The string to be converted.
 * 
 * @return	The converted value.
 */
int		ft_atoi(const char *str);

/**
 * @brief	Fills the first 'n' bytes of the memory area pointed to by 's' with
 * 			zeroes.
 * 
 * @param s 	The memory area to fill.
 * @param n 	The number of bytes to fill.
 */
void	ft_bzero(void *s, size_t n);

/**
 * @brief	Allocates memory for an array of 'elms' elements of 'size' bytes.
 * 			The memory is set to zero.
 * 
 * @param elms	The number of elements.
 * @param size	The size of each element.
 * 
 * @return	Pointer to the allocated memory.
 */
void	*ft_calloc(size_t elms, size_t size);

/**
 * @brief	Checks if the passed character is an alphanumeric character.
 * 
 * @param c 	The character to check.
 * 
 * @return	1 if the character is an alphanumeric character;
 * 			0 otherwise.
 */
int		ft_isalnum(int c);

/**
 * @brief	Checks if the passed character is an alphabetic character.
 * 
 * @param c 	The character to check.
 * 
 * @return	1 if the character is an alphabetic character;
 * 			0 otherwise.
 */
int		ft_isalpha(int c);

/**
 * @brief	Checks if the passed character is an ASCII character.
 * 
 * @param c 	The character to check.
 * 
 * @return	1 if the character is an ASCII character;
 * 			0 otherwise.
 */
int		ft_isascii(int c);

/**
 * @brief	Checks if the passed character is a digit.
 * 
 * @param c 	The character to check.
 * 
 * @return	1 if the character is a digit;
 * 			0 otherwise.
 */
int		ft_isdigit(int c);

/**
 * @brief 	Counts the number of digits in an integer.
 * 
 * @param n 	The integer to count the digits of.
 * 
 * @return	Number of digits in the integer.
 */
int		ft_intlen(int n);

/**
 * @brief	Checks if the passed character is a printable character.
 * 
 * @param c 	The character to check.
 * 
 * @return	1 if the character is a printable character;
 * 			0 otherwise.
 */
int		ft_isprint(int c);

/**
 * @brief	Checks if the passed character is a white-space character.
 *          In the "C" and "POSIX" locales, these are: space (' '), form-feed
 *          ('\\f'), newline ('\\n'), carriage return ('\\r'), horizontal tab
 *          ('\\t'), and vertical tab ('\\v').
 * 
 * @param c		The character to check.
 * 
 * @return	1 if the character is a white-space character;
 * 			0 otherwise.
 */
int		ft_isspace(int c);

/**
 * @brief	Converts an integer to a string.
 * 
 * @param n 	The integer to convert.
 * 
 * @return	Pointer to the string.
 */
char	*ft_itoa(int n);

/**
 * @brief Adds the element 'new' at the beginning of the list.
/**
 * @brief   Adds the element 'new' at the beginning of the list.
 * 
 * @param lst	Pointer to the first link of the list.
 * @param new	Pointer to the element to add at the beginning of the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief	Deletes and frees the given element and every successor of that
 * 			element.
 * 
 * @param	lst		The address of a pointer to an element.
 * @param	del		The address of the function used to delete the content of
 * 					the element.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief	Returns the last element of the list.
 * 
 * @param lst	Pointer to the first element of the list.
 * 
 * @return	The last element of the list.
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * @brief	Creates a new element of the list.
 * 
 * @param content 	The content to create the new element with.
 * 
 * @return t_list* 	The new element.
 */
t_list	*ft_lstnew(void *content);

/**
 * @brief	Counts the number of elements in a list.
 * 
 * @param lst	The beginning of the list.
 *
 * @return	The number of elements in the list. 
 */
int		ft_lstsize(t_list *lst);

/**
 * @brief	Locates the first occurrence of 'c' (converted to an unsigned char)
 * 			in string 'str'.
 * 
 * @param str	The string to be searched.
 * @param c		The character to be located.
 * 
 * @return	Pointer to the located character;
 * 			NULL if the character does not appear in the string.
 */
void	*ft_memchr(const void *str, int c, size_t n);

/**
 * @brief	Compares byte string 's1' against byte string 's2'.
 * 			Both strings are assumed to be 'n' bytes long.
 * 			Zero-length (empty) strings are always identical.
 * 
 * @param s1	Pointer to the first byte string.
 * @param s2	Pointer to the second byte string.
 * @param n		The number of bytes to be compared.
 * 
 * @return	'0' if the two strings are identical, the difference (number) between
 * 			the first two differing bytes otherwise.
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief	Copies 'n' bytes from memory area 'src' to memory area 'dst'.
 * 			The memory areas must not overlap; use ft_memmove() if the memory
 * 			areas do overlap.
 * 
 * @param dst 	The destination memory area.
 * @param src 	The source memory area.
 * @param n 	The number of bytes to copy.
 * 
 * @return	Pointer to 'dst'.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief	Copies 'n' bytes from memory area 'src' to memory area 'dst'.
 * 			The memory areas may overlap: copying takes place as though the
 * 			bytes in 'src' are first copied into a temporary array that does
 * 			not overlap 'src' or 'dst',	and the bytes are then copied from the
 * 			temporary array to 'dst'.
 * 
 * @param dst 	The destination memory area.
 * @param src 	The source memory area.
 * @param n 	The number of bytes to copy.
 * 
 * @return	Original value of 'dst'.
 */
void	*ft_memmove(void *dst, const void *src, size_t n);

/**
 * @brief	Fills the first 'n' bytes of the memory area pointed to by 's' with
 * 			the constant byte 'c'.
 * 
 * @param s 	The memory area to fill.
 * @param c 	The constant byte to fill the memory area with.
 * @param n 	The number of bytes to fill.
 * 
 * @return	Memory area pointed to by 's'.
 */
void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief	Writes the character 'c' to the given file descriptor.
 * 
 * @param c 	The character to write.
 * @param fd 	The file descriptor on which to write.
 */
void	ft_putchar_fd(char c, int fd);

/**
 * @brief	Writes the string 's' to the given file descriptor, followed by a
 * 			newline.
 * 
 * @param s 	The string to write.
 * @param fd 	The file descriptor on which to write.
 */
void	ft_putendl_fd(char *s, int fd);

/**
 * @brief	Writes the integer 'n' to the given file descriptor.
 * 
 * @param n 	The integer to write.
 * @param fd 	The file descriptor on which to write.
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * @brief	Writes the string 's' to the given file descriptor.
 * 
 * @param s 	The string to write.
 * @param fd 	The file descriptor on which to write.
 */
void	ft_putstr_fd(char *s, int fd);

/**
 * @brief	Splits a string into an array of strings using the character 'c' as a
 * 			delimiter.
 * 
 * @param str	The string to be split.
 * @param c		The delimiter character.
 * 
 * @return	Pointer to the array of strings.
 */
char	**ft_split(char const *s, char c);

/**
 * @brief	Locates the first occurrence of 'c' (converted to a char) in the
 * 			string pointed to by 'str'.
 * 			The null-terminating character is considered to be part of the
 * 			string; therefore if 'c' is '\0', the functions locate the
 * 			terminating '\0'.
 * 
 * @param str	The string to be searched.
 * @param c		The character to be located.
 * 
 * @return	Pointer to the located character;
 * 			NULL if the character does not appear in the string.
 */
char	*ft_strchr(const char *str, int c);

/**
 * @brief	Duplicates a string.
 * 
 * @param str	The string to be duplicated.
 * 
 * @return	Pointer to the duplicated string.
 */
char	*ft_strdup(const char *str);

/**
 * @brief	Applies the function 'f' to each character of the string passed as
 * 			argument, and passing its index as first argument; each character is
 * 			passed by address to 'f' to be modified if necessary.
 * 
 * @param s 	The string on which to iterate.
 * @param f 	The function to apply to each character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

/**
 * @brief	Allocates memory for a new string, which is the result of the
 * 			concatenation of 's1' and 's2'.
 * 
 * @param s1	The first string.
 * @param s2	The second string.
 * 
 * @return	Pointer to the new string.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief	Appends the null-terminated string 'src' to the end of 'dst'.
 * 			It will append at most 'sze - strlen(dst) - 1' bytes,
 * 			null-terminating the result.
 * 
 * @param dst 	The destination string.
 * @param src 	The source string.
 * @param sze 	The size of the destination string.
 * 
 * @return	The total length of the string it tried to create.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t sze);

/**
 * @brief	Copies up to 'size - 1' characters from the null-terminated string
 * 			'src' to 'dst', null-terminating the result.
 * 
 * @param dst 	The destination string.
 * @param src 	The source string.
 * @param sze 	The size of the destination string.
 * 
 * @return	The total length of the string 'src'.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t sze);

/**
 * @brief	Computes the length of the string 's'.
 * 
 * @param s 	The string to compute the length of.
 * 
 * @return	The length of the string 's'.
 */
size_t	ft_strlen(const char *s);

/**
 * @brief	Applies the function 'f' to each character of the string passed as
 * 			argument by giving its index as first argument to create a new
 * 			string resulting from successive applications of 'f'.
 * 
 * @param s 	The string on which to iterate.
 * @param f 	The function to apply to each character.
 * 
 * @return	Pointer to the new string.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief	Compares not more than 'n' characters.
 * 			Because strncmp() is designed for comparing strings rather than
 * 			binary data, characters that appear after a '\0' character are not
 * 			compared.
 * 
 * @param s1	The first string to be compared.
 * @param s2	The second string to be compared.
 * @param n		The number of characters to be compared.
 * 
 * @return	The difference (number) between the first two different characters.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief	Locates the first occurrence of the null-terminated string 'needle'
 * 			in the string 'haystack', searching not more than 'len' characters.
 * 			Characters that appear after a '\0' character are not searched.
 * 
 * @param haystack	The string containing the sequence of characters to match.
 * @param needle	The string to be searched.
 * @param len		The maximum number of characters to be searched.
 * 
 * @return	Pointer to the beginning of the located substring;
 * 			NULL if the substring is not found.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * @brief	Locates the last occurrence of 'c' (converted to a char) in the
 * 			string pointed to by 'str'.
 * 			The null-terminating character is considered to be part of the
 * 			string; therefore if 'c' is '\0', the functions locate the
 * 			terminating '\0'.
 * 
 * @param str	The string to be searched.
 * @param c		The character to be located.
 * 
 * @return	Pointer to the located character;
 * 			NULL if the character does not appear in the string.
 */
char	*ft_strrchr(const char *str, int c);

/**
 * @brief	Allocates and returns a copy of 's1' with the characters specified
 * 			in 'set' removed from the beginning and the end of the string.
 * 
 * @param s1	The string to be trimmed.
 * @param set	The reference set of characters to trim.
 * 
 * @return	The trimmed string;
 * 			NULL if the allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief	Allocates and returns a substring from the string 's'.
 * 			The substring begins at index 'start' and is of maximum size 'len'.
 * 
 * @param s		The string from which to create the substring.
 * @param start	The start index of the substring in the string 's'.
 * @param len	The maximum length of the substring.
 * 
 * @return	The substring;
 * 			NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief	Converts an upper-case letter to the corresponding lower-case letter.
 * 
 * @param c		The character to be converted.
 * 
 * @return	The convered character.
 */
int		ft_tolower(int c);

/**
 * @brief	Converts a lower-case letter to the corresponding upper-case letter.
 * 
 * @param c		The character to be converted.
 * 
 * @return	The convered character.
 */
int		ft_toupper(int c);

#endif
