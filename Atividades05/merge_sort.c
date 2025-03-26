// NOME: João Vitor Garcia Aguiar Mintz; RA: 10440421

#include <stdio.h>

void merge_sort(int array[], int p, int r);
void merge(int array[], int p, int q, int r);

int main()
{
    int array[10] = {2, 8, 3, 7, 9, 12, 98, 55, 83, 10};
    
    printf("Array inicial:\n-> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    
    merge_sort(array, 0, 9);
    
    
    printf("\n\nArray ordenado com Merge Sort:\n-> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}

void merge_sort(int array[], int p, int r) {
    if(p < r) {
        int q = (p+r) / 2;
        merge_sort(array, p, q);
        merge_sort(array,q+1, r);
        merge(array, p, q, r);
    }
    
}

void merge(int array[], int p, int q, int r) {
    int aux[r + 1];
    int i, j;

    for(i = p; i <= q; i++) {
        aux[i] = array[i];
    }

    for(j = q + 1; j <= r; j++) {
        aux[r + q + 1 - j] = array[j];
    }

    i = p;
    j = r;

    for(int k = p; k <= r; k++) {
        if(aux[i] <= aux[j]) {
            array[k] = aux[i];
            i++;
        } else {
            array[k] = aux[j];
            j--;
        }
    }
}