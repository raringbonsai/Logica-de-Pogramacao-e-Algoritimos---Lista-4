#include <stdio.h>

int main() {
    int vet[6];
    int i = 0;
    
    while (i < 6) {
        int temp;
        scanf("%d", &temp);
        if (temp % 2 == 0) {
            vet[i] = temp;
            i++;
        }
    }
    
    for (int j = 5; j >= 0; j--) {
        printf("%d\n", vet[j]);
    }
    
    return 0;
}