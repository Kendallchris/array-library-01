//
// Created by Chris Kendall on 10/5/22.
//


#include "array_library.h"
// #include <> means it will search within the C++ directory, not the current directory this file is in

int LinearSearch(int array[], unsigned int size, int key) {
    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            return i;
        }
    }
}

