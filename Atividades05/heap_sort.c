// NOME: João Vitor Garcia Aguiar Mintz; RA: 10440421

#include <stdio.h>

void desce_heap(int v[], int n, int i);
void constroi_heap(int v[], int n);
void heap_sort(int v[], int n);

int main() {
    int array[10] = {2, 8, 3, 7, 9, 12, 98, 55, 83, 10};
    
    printf("Array inicial\n-> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    
    heap_sort(array, 10);
    
    printf("\nArray ordenado por Heap Sort\n-> ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}

void desce_heap(int v[], int n, int i) {
    while(2*i + 1 < n) {
        int f = 2*i + 1;
        if(f + 1 < n && v[f+1] > v[f]) {  
            f = f + 1;
        }
        if(v[i] < v[f]) {
            int temp = v[i];
            v[i] = v[f];
            v[f] = temp;
            i = f;
        } else {
            break;
        }
    }
}

void constroi_heap(int v[], int n) {
    for(int i = n/2 - 1; i >= 0; i--) {
        desce_heap(v, n, i);
    }
}

void heap_sort(int v[], int n) {
    constroi_heap(v, n);
    for(int i = n - 1; i > 0; i--) {
        int temp = v[0];
        v[0] = v[i];
        v[i] = temp;
        desce_heap(v, i, 0);
    }
}

int extrai_maior_heap(int v[], int n) {
    int max = v[0];
    v[0] = v[n];
    desce_heap(v, n-1, 1);
    return max;
}