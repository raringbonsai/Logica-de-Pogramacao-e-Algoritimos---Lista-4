#include <stdio.h>

int main() {
    int vet[8];
    int X, Y;
    
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vet[i]);
    }
    
    scanf("%d %d", &X, &Y);
    
    if (X >= 0 && X < 8 && Y >= 0 && Y < 8) {
        printf("Soma: %d\n", vet[X] + vet[Y]);
    } else {
        printf("Posicoes invalidas.\n");
    }
    
    return 0;
}