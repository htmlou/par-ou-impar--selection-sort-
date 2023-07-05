#include <stdio.h>
// primeiro adicionar estrutura do selection sort dentro do void.
void selectionsort(int vet[], int n){
    int i, j, menor, aux;

    for (i = 0; i < n - 1; i++){
        menor = i;
        
        for (j = i + 1; j < n; j++){
            if (vet[j] < vet[menor]){
                menor = j;
            }
        }
        
        if (menor != i){
            aux = vet[i];
            vet[i] = vet[menor];
            vet[menor] = aux;
        }
    }
}
// abrir main para incluir comando de printf e scamf
int main (){
    int vet[10];
    int i; 

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &vet[i]);
    }
// aplicar selection sort nos valores guardados pelo vetor
selectionsort(vet, 10);

    printf("\nNumeros pares ordenados: ");
    for (i = 0; i < 10; i++){
        if (vet[i] % 2 == 0){
            printf("%d ", vet[i]);
        }
    }
// exibir númeors pares e impares ordenardos.
    printf("\nNumeros impares: ");
    for (i = 0; i < 10; i++){
        if (vet[i] % 2 != 0){
            printf("%d ", vet[i]);
        }
    }

    return 0;  
}