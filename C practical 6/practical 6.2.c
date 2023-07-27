#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], vSum[size];
    int sSum1 = 0, sSum2 = 0;
    int i;


    printf("Enter %d elements for array1:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
        sSum1 += array1[i];
    }


    printf("Enter %d elements for array2:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
        sSum2 += array2[i];
    }


    for (i = 0; i < size; i++) {
        vSum[i] = array1[i] + array2[i];
    }


    printf("Scalar Sum of array1: %d\n", sSum1);
    printf("Scalar Sum of array2: %d\n", sSum2);


    printf("Vector Sum: ");
    for (i = 0; i < size; i++) {
        printf("%d ", vSum[i]);
    }

}
