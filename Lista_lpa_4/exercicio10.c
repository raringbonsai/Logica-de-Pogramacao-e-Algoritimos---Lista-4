#include <stdio.h>

int main() {
    float notas[15];
    float soma = 0;
    
    for (int i = 0; i < 15; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    float media = soma / 15.0;
    
    printf("Media geral: %.2f\n", media);
    
    return 0;
}