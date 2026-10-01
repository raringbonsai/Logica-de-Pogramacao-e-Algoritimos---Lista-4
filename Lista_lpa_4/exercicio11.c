#include <stdio.h>

int main() {
    float vet[10];
    int negativos = 0;
    float soma_positivos = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vet[i]);
        if (vet[i] < 0) {
            negativos++;
        } else {
            soma_positivos += vet[i];
        }
    }
    
    printf("Quantidade de negativos: %d\n", negativos);
    printf("Soma dos positivos: %.2f\n", soma_positivos);
    
    return 0;
}