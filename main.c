#include <stdio.h>

#define SIZE 8

int findMax(int array[], int length) {
    int i;

    int temp = array[0];

    for (i = 0; i < length; i++) {
        if (array[i] > temp) {
            temp = array[i];
        }
    }
    return temp;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *array, int length) {
    int i, j;
    for (i = 0; i < length; i++) {
        for (j = i + 1; j < length; j++) {
            if (array[i] > array[j]) {
                swap(&array[i], &array[j]);
            }
        }
    }
}

void printArray(int *array, int length) {
    int i;
    for (i = 0; i < length; i++) {
        printf("%d ", *(array + i));
    }
    puts("");
}

int main() {
    int exmp[SIZE] = {41, 2, 3, 10, 5, 4, 31, 20};

    // before sorting
    printArray(exmp, SIZE);

    // sort the array
    sort(exmp, SIZE);

    // after sorting
    printArray(exmp, SIZE);

    // max number of the array
    printf("Max number of the array: %d\n", findMax(exmp, SIZE));

    return 0;
}
