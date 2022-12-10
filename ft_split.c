/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 13:15:08 by antgalan          #+#    #+#             */
/*   Updated: 2022/12/10 19:25:19 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief	Computes the index of the next delimiter.
 * 
 * @param str	String where search.
 * @param c 	Delimiter character.
 * @param i 	Index of the actual iteration.
 * 
 * @return	Pointer to the substring.
 */
static int	next_delimiter(char const *str, char c, int i)
{
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

/**
 * @brief	Computes the index of the next word.
 * 
 * @param str	String where search.
 * @param c 	Delimiter character.
 * @param i 	Index of the actual iteration.
 * 
 * @return	Pointer to the substring.
 */
static int	next_word(char const *str, char c, int i)
{
	while (str[i] && str[i] == c)
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
			i = next_delimiter(str, c, i);
		}
		else
			i++;
	}
	return (words);
}

/**
 * @brief	Frees the memory of an array of strings.
 * 
 * @param str	Array of strings to be freed.
 */
static void	free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
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
	char	**res;
	int		wrds;
	int		i;
	int		j;

	wrds = count_words(str, c);
	res = (char **) malloc(sizeof(char *) * (wrds + 1));
	if (!str || !res)
		return (NULL);
	i = 0;
	j = 0;
	while (j < wrds)
	{
		i = next_word(str, c, i);
		res[j] = ft_substr(str, i, next_delimiter(str, c, i) - i);
		if (!res[j])
		{
			free_split(res);
			return (NULL);
		}
		i = next_delimiter(str, c, i);
		j++;
	}
	res[j] = NULL;
	return (res);
}
