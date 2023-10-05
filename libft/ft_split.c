/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <cng>                               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:08:50 by marvin            #+#    #+#             */
/*   Updated: 2023/10/04 15:08:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
PURPOSE: 	splits a string into an array of substrings 
			based on a delimiter character.

count_words function:
1. Count number of words
a. if not delimiter, increment count
b. while not NULL char + not delimiter, keep incrementing the char index
c. else if delimiter, increment char index

count_word_len function:
- count the number of char in the word until delimiter is reached

split function:
- iterates through char until not delimiter char
- store substring in array
- substring 
- if mem allocation fails, free the memory for whole array
- returns null value if mem allocation fails
- 
*/

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
		else if (*(s + i) == c)
			i++;
	}
	return (count);
}

static size_t	count_word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

static void	free_array(size_t i, char **array)
{
	while (i > 0)
	{
		i--;
		free(*(array + i));
	}
	free(array);
}

static char	**split(char const *s, char c, char **array, size_t words_count)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words_count)
	{
		while (*(s + j) && *(s + j) == c)
			j++;
		*(array + i) = ft_substr(s, j, count_word_len(&*(s + j), c));
		if (!*(array + i))
		{
			free_array(i, array);
			return (NULL);
		}
		while (*(s + j) && *(s + j) != c)
			j++;
		i++;
	}
	*(array + i) = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	num_of_words;

	if (!s)
		return (NULL);
	numOfWords = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (numOfWords + 1));
	if (!array)
		return (NULL);
	array = split(s, c, array, numOfWords);
	return (array);
}
