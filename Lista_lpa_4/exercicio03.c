#include <stdio.h>

int main() {
    float A[10], B[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%f", &A[i]);
        B[i] = A[i] * A[i];
    }
    
    printf("Vetor original:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", A[i]);
    }
    
    printf("\nVetor ao quadrado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2f ", B[i]);
    }
    printf("\n");
    
    return 0;
}