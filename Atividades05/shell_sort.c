// NOME: João Vitor Garcia Aguiar Mintz; RA: 10440421

#include <stdio.h>

void shell_sort(int array[], int n);

int main()
{
    int array[10] = {2, 8, 3, 7, 9, 12, 98, 55, 83, 10};
    
    printf("Array inicial:\n-> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    
    shell_sort(array, 10);
    
    
    printf("\n\nArray ordenado com Insertion Sort:\n-> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

void shell_sort(int array[], int n) {
    int h = n/2;
    while(h > 0) {
        for(int j = h; j < n; j++) {
            int chave = array[j];
            int i = j;
            while(i >= h && array[i - h] > chave) {
                array[i] = array[i - h];
                i = i - h;
            }
            array[i] = chave;
        }
        h = h/2;
    }
    
}