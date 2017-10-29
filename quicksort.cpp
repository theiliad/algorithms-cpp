#include<stdio.h>

void swap(int* a, int* b) {
    // return a
    int temp = *a;
    *a = *b;
    *b = *a;
}

int main() {
    printf("Test");
    
    int a = 10;
    int b = 5;
    swap(&a, &b);
}