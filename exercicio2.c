#include <stdio.h>

int main() {
    char c = ' ';
    int f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0;
    int cont = 0, par = 0, impar = 0;
    float med = 0, M = 0, menor = 0, n = 0;

    while (c != 'N' && c != 'n') {
        printf("Digite um numero: ");
        scanf("%f", &n);
        printf("Deseja continuar (S/N): ");
        scanf(" %c", &c);

        med += n;
        cont++;

        if (cont == 1) {
            M = menor = n;
        }

        if (n > M) {
            M = n;
        }
        if (n < menor) {
            menor = n;
        }

        if ((int)n % 2 != 0) {
            impar++;
        } else {
            par++;
        }

        if (n < 0) {
            f1++;
        } else if (n >= 0 && n < 15) {
            f2++;
        } else if (n >= 15 && n < 100) {
            f3++;
        } else if (n >= 100 && n < 1000) {
            f4++;
        } else {
            f5++;
        }
    }

    printf("Media aritmetica: %.2f\n", med/cont);
    printf("Menor numero: %.2f\n", menor);
    printf("Maior numero: %.2f\n", M);
    printf("Total de numeros pares: %d\n", par);
    printf("Total de numeros impares: %d\n", impar);
    printf("Elementos na faixa 1: %d\n", f1);
    printf("Elementos na faixa 2: %d\n", f2);
    printf("Elementos na faixa 3: %d\n", f3);
    printf("Elementos na faixa 4: %d\n", f4);
    printf("Elementos na faixa 5: %d\n", f5);

    return 0;
}
