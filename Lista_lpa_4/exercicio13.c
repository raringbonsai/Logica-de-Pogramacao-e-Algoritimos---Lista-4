#include <stdio.h>

int main() {
    float vet[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%f", &vet[i]);
    }
    
    float maior = vet[0];
    float menor = vet[0];
    int pos_maior = 0;
    int pos_menor = 0;
    
    for (int i = 1; i < 5; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            pos_maior = i;
        }
        if (vet[i] < menor) {
            menor = vet[i];
            pos_menor = i;
        }
    }
    
    printf("Posicao do maior: %d\n", pos_maior);
    printf("Posicao do menor: %d\n", pos_menor);
    
    return 0;
}