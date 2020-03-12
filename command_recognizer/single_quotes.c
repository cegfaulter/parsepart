/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_quotes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-omar <mel-omar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 04:16:34 by mel-omar          #+#    #+#             */
/*   Updated: 2020/03/11 04:16:53 by mel-omar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "recognizer.h"

char        *single_quotes(char *str, int *iter)
{
    int     len;
    char    *s;

    len = 0;
    while (str[len + *iter] != '\'' && str[len + *iter])
        len++;
    if (str[len + *iter] != '\'')
    {
        print("Error!\n");
        return (NULL);
    }
    len = 0;
    s = malloc(sizeof(char) * (len + 1));
    while (str[*iter] != '\'' && str[*iter] != '\0')
    {
        s[len] = str[*iter];
        len++;
        (*iter)++;
    }
    s[len] = 0;
    return (s);
}