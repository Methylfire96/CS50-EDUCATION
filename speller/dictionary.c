// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    node *w = malloc(sizeof(word));
    while (w != 0)
    {
        if (strcasecmp(word, w->word) == 0)
        {
            return true;
            w = w->next;
        }
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    for ( int i = 0; i < strlen(word); i++)
    {
        return toupper(word[0]) - 'A';
    }
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO
    TEXT * text = fopen(dictionary, "r");
    if (text = NULL)
    {
        printf("cant open dict %s:\n", dictionary);
        return false;
    }
    char word[LENGTH +1];
    while (fscanf(text, "%s", word) != )

}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
