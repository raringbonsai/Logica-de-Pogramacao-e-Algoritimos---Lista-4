#include <stdio.h>

int main() {
    float vet[5];
    float soma = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%f", &vet[i]);
        soma += vet[i];
    }
    
    float maior = vet[0];
    float menor = vet[0];
    
    for (int i = 1; i < 5; i++) {
        if (vet[i] > maior) maior = vet[i];
        if (vet[i] < menor) menor = vet[i];
    }
    
    printf("Valores lidos: ");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", vet[i]);
    }
    
    printf("\nMaior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Media: %.2f\n", soma / 5.0);
    
    return 0;
}