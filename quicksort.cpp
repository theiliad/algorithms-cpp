#include<stdio.h>
#include <vector>
using namespace std;
#include <algorithm>    // std::random_shuffle
#include <iostream>
#include <random>


void swap(int* a, int* b) {
    // return a
    int temp = *a;
    *a = *b;
    *b = *a;
}

void sort(std::vector<int> arrayToBeSorted, int low, int high) {
    std::random_device randomDevice;
    std::mt19937 generator(randomDevice());
    shuffle(arrayToBeSorted.begin(), arrayToBeSorted.end(), generator);

    for(int i=0; i<arrayToBeSorted.size(); ++i)
    cout << arrayToBeSorted[i] << ' ';
}

int main() {
    printf("Test\n");

    size_t size = 10;
    std::vector<int> array(size);
    for(int i=0; i<size; ++i) {
        array[i] = i;
    }

    sort(array, 0, sizeof(array) - 1);

    int a = 10;
    int b = 5;
    swap(&a, &b);
}