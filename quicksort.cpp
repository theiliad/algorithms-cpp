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
    *b = temp;
}

int partition(std::vector<int> a, int low, int high) {
    int i = low + 1, j = high;
    bool iStop = false, jStop = false;
    while(true) {
        if (iStop == false && a[low] > a[i]) i++;
        else iStop = true;

        if (jStop == false && a[j] > a[low]) j--;
        else jStop = true;
        
        if (iStop && jStop) {
            cout << "\ni: " << i << "\n";
            cout << "\nj: " << j << "\n";
            cout << "Time to Change\n";

            swap(&a[i], &a[j]);

            for(int i=0; i<a.size(); ++i)
            cout << a[i] << ' ';

            break;
        }
    }

    return 10;
}

void sort(std::vector<int> arrayToBeSorted, int low, int high) {
    if (high <= low) return;
    int j = partition(arrayToBeSorted, low, high);
    cout << "\npartitionJ: " << j << "\n";
}

void sort(std::vector<int> arrayToBeSorted) {
    std::random_device randomDevice;
    std::mt19937 generator(randomDevice());
    shuffle(arrayToBeSorted.begin(), arrayToBeSorted.end(), generator);

    for(int i=0; i<arrayToBeSorted.size(); ++i)
    cout << arrayToBeSorted[i] << ' ';

    sort(arrayToBeSorted, 0, arrayToBeSorted.size() - 1);
}

int main() {
    printf("Test\n");

    size_t size = 10;
    std::vector<int> array(size);
    for(int i=0; i<size; ++i) {
        array[i] = i;
    }

    sort(array);

    int a = 10;
    int b = 5;
    swap(&a, &b);
}