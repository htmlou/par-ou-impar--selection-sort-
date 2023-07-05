#include <stdio.h>

void selectionsort(int vet[], int n){
    int i, j, menor, aux;

    for (i = 0; i < n - 1; i++){
        menor = i;
        
        for (j = i + 1; j < n; j++){
            if (vet[j] < vet[menor]){
                menor = j;
            }
        }
    }
}