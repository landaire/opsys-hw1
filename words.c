//
// Created by Lander Brandt on 3/30/15.
//

#include "words.h"
#include "print_helper.h"

void printWordsArray(const Words *words) {
    size_t i;
    for (i = 0; i < WORDS; i++) {
        print_start(i);

        printf("%s", (char*)(words + i)->word);

        print_end(i, WORDS);
    }
}

int compareTwoWords(const void *a, const void *b) {
    return strcmp((char*)((Words*)a)->word, (char*)((Words*)b)->word);
}

void fillArray(FILE *fin, Words *wordsArray) {
    ssize_t read = 0;
    size_t i;
    for (i = 0; i < WORDS; i++) {
        Words *word = wordsArray + i;
        char *text = 0;
        size_t length = 0;
        read = getline(&text, &length, fin);

        // Get around an rvalue error

        // Remove the newline
        int newlineLenCheck;
        for (newlineLenCheck = 2; newlineLenCheck > 0; i--) {
            if (text[read - newlineLenCheck] == '\r' || text[read - 1] == '\n') {
                text[read - newlineLenCheck] = '\0';
                length -= newlineLenCheck;
                break;
            }
        }

        word->word = text;
        word->length = (int)(read);

        if (read == -1) {
            break;
        }
    }
}

void cleanUp(Words *wordsArray) {
    size_t i;
    for (i = 0; i < WORDS; i++) {
        free((wordsArray + i)->word);
    }
}
