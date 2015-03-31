//
// Created by Lander Brandt on 3/30/15.
//

#include <stdio.h>
#include "print_helper.h"

void print_start(size_t index) {
    if (index == 0) {
        printf("[");
    } else {
        printf(", ");
    }
}

void print_end(size_t index, size_t size) {
    if (index == size - 1) {
        printf("]");
    }
}