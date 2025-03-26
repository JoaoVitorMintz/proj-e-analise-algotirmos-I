// NOME: João Vitor Garcia Aguiar Mintz; RA: 10440421

#include <stdio.h>

void bubble_sort(int array[], int n);

int main()
{
    int array[10] = {2, 8, 3, 7, 9, 12, 98, 55, 83, 10};
    
    printf("Array inicial:\n-> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    
    bubble_sort(array, 10);
    
    
    printf("\n\nArray ordenado com Bubble Sort:\n-> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

void bubble_sort(int array[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(array[j] > array[j+1]) {
                int a = 0;
                a = array[j];
                array[j] = array[j+1];
                array[j+1] = a;
            }
        }
    }
}