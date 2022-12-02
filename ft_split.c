/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:15:08 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/02 17:55:14 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Computes the index of the next delimiter.
 * 
 * @param str	String to search.
 * @param c 	Delimiter character.
 * @param i 	Index of the actual iteration.
 * 
 * @return	Pointer to the substring.
 */
static int	find_end(char const *str, char c, int i)
{
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

/**
 * @brief	Counts the number of words in a string.
 * 
 * @param str	String to be counted.
 * @param c		Delimiter.
 * 
 * @return	Number of words.
 */
static size_t	count_words(const char *str, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			words++;
			i = find_end(str, c, i);
		}
		else
			i++;
	}
	return (words);
}

/**
 * @brief	Creates a new string with the content of 'str' from 'start' to 'end'.
 * 
 * @param str	String to be copied.
 * @param start	Starting index.
 * @param end	Ending index.
 * 
 * @return	Pointer to the new string.
 */
static char	*substrcpy(const char *str, size_t start, size_t end)
{
	char	*substr;
	int		i;

	substr = (char *) malloc(end - start + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (start < end)
		substr[i++] = str[start++];
	substr[i] = '\0';
	return (substr);
}

/**
 * @brief	Splits a string into an array of strings using the character 'c' as a
 * 			delimiter.
 * 
 * @param str	String to be split.
 * @param c		Delimiter.
 * 
 * @return	Pointer to the array of strings.
 */
char	**ft_split(const char *str, char c)
{
	char	**split;
	int		start;
	int		i;
	int		j;

	if (!str)
		return (NULL);
	split = (char **) malloc(sizeof(char *) * (count_words(str, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			start = i;
			split[j++] = substrcpy(str, start, find_end(str, c, start));
		}
		else
			i++;
	}
	split[j] = NULL;
	return (split);
}
