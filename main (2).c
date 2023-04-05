#include <stdio.h>

int main() {
    int numeros[5], i, maior = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }


    for (i = 0; i < 5; i++) {
        if (numeros[i] > 100) {
            maior++;
            
        }
    }

    printf("São ao todo, %d números, maiores que 100.\n", maior);

    return 0;
}