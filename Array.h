#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void generateRandomArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 10; 
    }
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void findUniqueNumbers(int *array, int size) {
    for (int i = 0; i < size; i++) {
        int isUnique = 1;
        for (int j = 0; j < size; j++) {
            if (i != j && array[i] == array[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");
}

void findCommonNumbers(int *array1, int size1, int *array2, int size2) {
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (array1[i] == array2[j]) {
                printf("%d ", array1[i]);
                break;
            }
        }
    }
    printf("\n");
}