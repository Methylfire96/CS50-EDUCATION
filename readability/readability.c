#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int coleman_liau_formula(int letters,int words,int sentences);

int main(void)
{
    string text;
    do
    {
        text = get_string("Please enter your text: ");
    }
    while(text[0] == ' ');

    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);
    int grade = coleman_liau_formula(letters,words,sentences);

    printf("%s - ", text);

    if(grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if(grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}

int count_letters(string text)
{
    int letter_count = 0;
    int len = strlen(text);

    for (int i = 0; i < len; i++)
    {
        if (isalpha(text[i]))
        {
            letter_count++;
        }
    }
    return letter_count;
}

int count_words(string text)
{
    int word_count = 1;
    int len = strlen(text);

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

    while(text[len - 1] != '!' && text[len - 1] != '?' && text[len - 1] != '.' && text[len - 1] != '.' && text[len - 1] != '"')
    {
        printf("Please make sure your text ends with a period, exclamation mark, or question mark. Enter your text again: ");
        text = get_string("");
        len = strlen(text);//update new length!
    }

    for (int i = 0; i < len; i++)
    {
        if(text[i] == '!' || text[i] == '?' || text[i] == '.')
        {
            sentence_count++;
        }
    }
    return sentence_count;
}




int coleman_liau_formula(int letters,int words,int sentences)
{
    float L = (letters * 100) / (float) words;
    float S = (sentences * 100) / (float) words;

    float grade = lround(0.0588 * L - 0.296 * S - 15.8);
    return grade;
}