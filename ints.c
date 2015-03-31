//
// Created by Lander Brandt on 3/30/15.
//

#include "ints.h"
#include "print_helper.h"

void printIntArray(const int *ints) {
    size_t i;
    for (i = 0; i < INTS; i++) {
        print_start(i);

        printf("%d", *(ints + i));

        print_end(i, INTS);
    }
}

int compareTwoInts(const void *a, const void *b) {
    return (*(int*)a) - (*(int*)b);
}