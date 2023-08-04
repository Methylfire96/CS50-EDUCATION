#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int ALPHABET[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int count_letters(string text);
int count_words(string text);
//int count_sentences(string text);

//int coleman_liau_formula(string letters,string words,int sentences);


int main(void)
{
    string text = get_string("Please enter your text: ");


    int letters = count_letters(text);
    int words = count_words(text);
    //int sentences = count_sentences(text);

    printf("%s  %i letters, %i words\n", text, letters, words);
}


//counting letters, words, sentences

int count_letters(string text)
{
    int letter_count = 0;
    int len = strlen(text);

    for (int i = 0; i < len; i++)
    {
        if(isupper(text[i]))
        {
            letter_count += ALPHABET[text[i] - 'A'];
        }
        /*if(isblank(text[i]))
        {
            letter_count += (ALPHABET[text[i] + 1]);

        }*/
        if(islower(text[i]))
        {
            letter_count += ALPHABET[text[i] - 'a'];
        }
    }
    return letter_count;
}

int count_words(string text)
{
    int word_count = 0;
    int blank = isblank(text);

    for(int i = 0; i < blank; i++)
    {
        word_count = text[i] + 1;

    }
    return word_count;
}


/*
int count_sentences(string text)
{

}




int coleman_liau_formula(string letters,string words,int sentences);

{
    //max grade 16+ and min grade 1
}
*/

