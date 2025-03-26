// NOME: João Vitor Garcia Aguiar Mintz; RA: 10440421

#include <stdio.h>

void insertion_sort(int array[], int n);

int main()
{
    int array[10] = {2, 8, 3, 7, 9, 12, 98, 55, 83, 10};
    
    printf("Array inicial:\n-> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    
    insertion_sort(array, 10);
    
    
    printf("\n\nArray ordenado com Insertion Sort:\n-> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

void insertion_sort(int array[], int n) {
    int chave;
    int i;
    for(int j = 2; j < n; j++) {
        chave = array [j];
        i = j - 1;
        while(i > 0 && array[i] > chave) {
            array[i+1] = array[i];
            i -= 1;
        }
        array[i + 1] = chave;
    }
    
}