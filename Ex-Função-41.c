// Ex 41//
#include <stdio.h>

int main()

{

    float temp;

    char tipo;

    printf("Digite a temperatura: ");

    scanf("%f", &temp);

    printf("Digite C para Celsius ou F para Fahrenheit: ");

    scanf(" %c", &tipo);

    switch (tipo)

    {

    case 'C':

    case 'c':

        printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", temp, (temp * 1.8) + 32);

        break;

    case 'F':

    case 'f':

        printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", temp, (temp - 32) / 1.8);

        break;

    default:

        printf("Erro! Tente novamente.\n");

        break;
    }

    return 0;
}
