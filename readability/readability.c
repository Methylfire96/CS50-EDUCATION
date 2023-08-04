#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

//int coleman_liau_formula(string letters,int words,int sentences);


int main(void)
{
    string text = get_string("Please enter your text: ");
    return printf("%s\n", text);

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);


}


//counting letters, words, sentences

int count_letters(string text)
{
    int letter_count = 0;
    int len = strlen(text);

    for (int i = 0; i < len; i++)
    {
        letter_count += text[i];
    }
    while(string text == isupper && islower && isblank)
    {
        return letter_count;
    }
    return printf("somethings wrong\n");
}



/*
int count_words(string text)
{

}



int count_sentences(string text)
{

}




int coleman_liau_formula(string letters,int words,int sentences);

{
    //max grade 16+ and min grade 1
}
*/

