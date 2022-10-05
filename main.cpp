#include <iostream>
#include "array_library.h" //only the header file. not the .cpp EVER

using std::cout;
using std::cin;
using std::endl;

int main() {
    int data[] = {7, 4, 1, 9, 0, 11, 21, 3, 8, 5};
    const unsigned int SIZE = sizeof(data) / sizeof(data[0]);

    int position = LinearSearch(data, SIZE, 8);
    cout << "9 found in position " << position << endl;
    int max = FindMax(data, SIZE);
    cout << "Max: " << max << endl;
    int min = FindMin(data, SIZE);
    cout << "Min: " << min << endl;
    double average = FindAverage(data, SIZE);
    cout << "Average: " << average << endl;
    assert(LinearSearch(data, SIZE, 7) == 0);
    assert(LinearSearch(data, SIZE, 4) == 1);
    assert(LinearSearch(data, SIZE, 1) == 2);
    assert(LinearSearch(data, SIZE, 9) == 3);
    assert(LinearSearch(data, SIZE, 0) == 4);
    assert(LinearSearch(data, SIZE, 11) == 5);
    assert(LinearSearch(data, SIZE, 21) == 6);
    assert(LinearSearch(data, SIZE, 3) == 7);
    assert(LinearSearch(data, SIZE, 8) == 8);
    assert(LinearSearch(data, SIZE, 5) == 9);
    assert(LinearSearch(data, SIZE, 100) == -1);

    assert(FindMax(data, SIZE) == 21);
    assert(FindMin(data, SIZE) == 0);
    assert(FindAverage(data, SIZE) == 6.9);
    assert(FindAverage(data, SIZE) - 6.9 < 0.00000001);

    return 0;
}
