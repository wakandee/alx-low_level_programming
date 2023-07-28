#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - count the number of words in a string
 * @str: input string
 *
 * Return: number of words
 */
int count_words(char *str)
{
    int num = 0;

    for (; *str != '\0';)
    {
        if (*str == ' ')
            str++;
        else
        {
            num++;
            for (; *str != ' ' && *str != '\0';)
                str++;
        }
    }

    return (num);
}

/**
 * free_everything - free the memory allocated for the words
 * @words: pointer to the array of words
 * @num_words: number of words in the array
 */
void free_everything(char **words, int num_words)
{
    for (; num_words > 0; num_words--)
        free(words[num_words - 1]);
    free(words);
}

/**
 * strtow - split a string into words
 * @str: input string
 *
 * Return: pointer to the array of words
 */
char **strtow(char *str)
{
    int total_words = 0, word_index = 0, char_index = 0, word_length = 0;
    char **words, *found_word;

    if (str == NULL || *str == '\0')
        return (NULL);

    total_words = count_words(str);

    if (total_words == 0)
        return (NULL);

    words = malloc((total_words + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    for (; *str != '\0' && word_index < total_words;)
    {
        if (*str == ' ')
            str++;
        else
        {
            found_word = str;
            for (; *str != ' ' && *str != '\0';)
            {
                word_length++;
                str++;
            }

            words[word_index] = malloc((word_length + 1) * sizeof(char));
            if (words[word_index] == NULL)
            {
                free_everything(words, word_index);
                return (NULL);
            }

            while (*found_word != ' ' && *found_word != '\0')
            {
                words[word_index][char_index] = *found_word;
                found_word++;
                char_index++;
            }
            words[word_index][char_index] = '\0';

            word_index++;
            char_index = 0;
            word_length = 0;
            str++;
        }
    }

    return (words);
}

