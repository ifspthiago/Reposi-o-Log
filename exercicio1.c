#include <stdio.h>

int main()
{

    float at;
    char nome[100];

    printf("Empresa XYZ.\n");
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite o salario atual de %s: ", nome);
    scanf("%f", &at);
    if (at >= 0 && at <= 400)
    {
        printf("%s teve um aumento de 15%, o seu salario de RS %.2f passou a ser RS %.2f.", nome, at, at + at * 0.15);
    }
    else if (at >= 401 && at <= 700)
    {
        printf("%s teve um aumento de 12%, o seu salario de RS %.2f passou a ser RS %.2f.", nome, at, at + at * 0.12);
    }
    else if (at >= 701 && at <= 1000)
    {
        printf("%s teve um aumento de 10%, o seu salario de RS %.2f passou a ser RS %.2f.", nome, at, at + at * 0.1);
    }
    else if (at >= 1001 && at <= 1800)
    {
        printf("%s teve um aumento de 7%, o seu salario de RS %.2f passou a ser RS %.2f.", nome, at, at + at * 0.07);
    }
    else if (at >= 1801 && at <= 2500)
    {
        printf("%s teve um aumento de 4%, o seu salario de RS %.2f passou a ser RS %.2f.", nome, at, at + at * 0.04);
    }
    else if (at > 2500)
    {
        printf("%s nao teve um aumento, o seu salario de RS %.2f permanecera o mesmo.", nome, at);
    }
    else
    {
        printf("Invalido.");
    }

    return 0;
}
