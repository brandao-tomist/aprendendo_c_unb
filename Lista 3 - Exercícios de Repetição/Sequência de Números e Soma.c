#include <stdio.h>

int main() {
    int m, n;
    int menor, maior, i, soma;

    while (scanf("%d %d", &m, &n) == 2) {

        if (m <= 0 || n <= 0) {
            break;
        }
        
        if (m < n) {
            menor = m;
            maior = n;
        } else {
            menor = n;
            maior = m;
        }

        soma = 0;
 
        for (i = menor; i <= maior; i++) {
            printf("%d ", i);
            soma += i;
        }

        printf("Sum=%d\n", soma);
    }

    return 0;
}
