#include <stdio.h>
void bubbleSort(int array[], int size) {
    int i, j;
    int swapped;
    for (i = 0; i < size - 1; i++) {
        swapped = 0;
        for (j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf_s("%d", &size);

    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }
    int array[8];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf_s("%d", &array[i]);
    }
    bubbleSort(array, size);
    printf("Sorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}