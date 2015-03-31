#ifndef WORDS_H
#define WORDS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WORDS 24

struct words
{
    void * word;
    int length;
};

typedef struct words Words;

void printWordsArray(const Words *wordsArray);
int compareTwoWords(const void *a, const void *b);
void cleanUp(Words *wordsArray);
void fillArray(FILE *fin, Words *wordsArray);


#endif // WORDS_H
