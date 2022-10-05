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
    return -1;
}

int FindMax(int array[], unsigned int size){
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int FindMin(int array[], unsigned int size){
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

double FindAverage(int array[], unsigned int size){
    double average;
    for (int i = 0; i < size; i++) {
        average += (double)array[i];
    }
    average = average / (double)size;
    return average;
}

unsigned int MinimumPosition(int array[], unsigned int size, unsigned int pos = 0){
    unsigned int minPosition = 0;
    for (int i = pos; i < size; i++) {
        if (array[minPosition] > array[i]) {
            minPosition = i;
        }
    }
    return minPosition;
}

void SelectionSort(int array[], unsigned int size){

}




