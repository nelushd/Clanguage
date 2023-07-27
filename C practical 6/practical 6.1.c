#include <stdio.h>

int main() {


    int sum = 0;
    int i,min, max,size = 10;
    int array[size];

    printf("Enter 10 integer values:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    min = max = array[0];
    for (i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }


    for (i = 0; i < size; i++) {
        sum += array[i];
    }
    float avg = (float)sum / size;


    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    printf("Average value: %.2f\n", avg);


    printf("Reverse order of values: ");
    for (i = size - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }


}
