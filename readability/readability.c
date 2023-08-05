#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ALPHABET[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

//int coleman_liau_formula(string letters,string words,int sentences);


int main(void)
{
    string text = get_string("Please enter your text: ");

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    printf("%s  %i letters, %i words, % i sentences\n", text, letters, words, sentences);
}


//counting letters, words, sentences

int count_letters(string text)
{
    int letter_count = 0;
    int len = strlen(text);

    for (int i = 0; i < len; i++)
    {
        if (isupper(text[i]))
        {
            letter_count += ALPHABET[text[i] - 'A'];
        }
        if (islower(text[i]))
        {
            letter_count += ALPHABET[text[i] - 'a'];
        }
    }
    return letter_count;
}

int count_words(string text)
{
    int word_count = 1;
    int len = strlen(text);

    if(text[0] == ' ')
    {
        do
        {
            printf("The first character cannot be a space. Please enter your text again: \n");
            text = get_string("");

        }
        while (text[0] == ' ');
    }

    for (int i = 0; i < len; i++)
    {
        if(text[i] == ' ')
        {
            word_count++;
        }
    }
    return word_count;
}



int count_sentences(string text)
{
    int sentence_count = 0;
    int len = strlen(text);

    for (int i = 0; i < len; i++)
    {
        if(text[i] == '!' || text[i] == '?' || text[i] == '.')
        {
            sentence_count++;
        }
    }
    return sentence_count;
}




/*int coleman_liau_formula(string letters,string words,int sentences);

{
    //max grade 16+ and min grade 1
}
*/

