//
// Created by Lander Brandt on 3/30/15.
//

#include <stddef.h>
#include <stdio.h>
#include "print_helper.h"
#include "chars.h"

void printCharArray(const char *chars) {
    size_t i;
    for (i = 0; i < CHARS; i++) {
        print_start(i);

        printf("%c", *(chars + i));

        print_end(i, CHARS);
    }
}

int compareTwoChars(const void *a, const void *b) {
    return (*(char*)a) - (*(char*)b);
}