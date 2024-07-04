#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Array.h"


void generateRandomArray(int *array, int size);
void printArray(int *array, int size);
void findUniqueNumbers(int *array, int size);
void findCommonNumbers(int *array1, int size1, int *array2, int size2);

int main() {
    int n1, n2;
    int *array1, *array2;

    
    srand(time(NULL));

    
    printf("Enter the number of elements for the first array: ");
    scanf("%d", &n1);

    
    printf("Enter the number of elements for the second array: ");
    scanf("%d", &n2);

    
    array1 = (int *)malloc(n1 * sizeof(int));
    array2 = (int *)malloc(n2 * sizeof(int));

    if (array1 == NULL || array2 == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    
    generateRandomArray(array1, n1);
    generateRandomArray(array2, n2);

    
    printf("\nArray 1: ");
    printArray(array1, n1);
    printf("\nArray 2: ");
    printArray(array2, n2);

    
    printf("\nUnique numbers in Array 1: ");
    findUniqueNumbers(array1, n1);
    printf("\nUnique numbers in Array 2: ");
    findUniqueNumbers(array2, n2);

    
    printf("\nCommon numbers between Array 1 and Array 2: ");
    findCommonNumbers(array1, n1, array2, n2);

    
    free(array1);
    free(array2);

    return 0;
}

