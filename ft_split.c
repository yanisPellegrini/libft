/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanispellegrini <yanispellegrini@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 11:15:17 by ypellegr          #+#    #+#             */
/*   Updated: 2025/04/03 10:54:03 by yanispelleg      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_words(char *str, char c)
{
    int count = 0;
    int in_word = 0;

    if (str == NULL)
        return 0;
    while (*str) {
        if (*str == c) {
            in_word = 0;
        }
        if (!in_word) {
            in_word = 1;
            count++;
        }
        str++;
    }
    return count;
}

int length(char c, int i, char *str)
{
    int temp = i;

    while (str[i] != c && str[i] != '\0') {
        i++;
    }
    i -= temp;
    return (i + 1);
}

char **my_str_to_word_array(char *str, char c)
{
    int count = count_words(str, c);
    char **tab = malloc(sizeof(char *) * (count + 1));
    int i = 0;
    int index = 0;
    int j = 0;

    for (j; j < count; j++) {
        tab[j] = malloc(sizeof(char) * length(c, i, str));
        for (index = 0; str[i] != c && str[i] != '\0'; index ++) {
            tab[j][index] = str[i];
            i++;
        }
        i++;
        tab[j][index] = '\0';
    }
    tab[count] = NULL;
    return tab;
}
