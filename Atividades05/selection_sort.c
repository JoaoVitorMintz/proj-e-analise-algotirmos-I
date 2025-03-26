// NOME: João Vitor Garcia Aguiar Mintz; RA: 10440421

#include <stdio.h>

void selection_sort(int array[], int n);

int main()
{
    int array[10] = {2, 8, 3, 7, 9, 12, 98, 55, 83, 10};
    
    printf("Array inicial:\n-> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    
    selection_sort(array, 10);
    
    
    printf("\n\nArray ordenado com Insertion Sort:\n-> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

void selection_sort(int array[], int n) {
    for(int i = 1; i < n - 1; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if(array[j] < array[min]) {
                min = j;
            }
        }
        int temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
    
}