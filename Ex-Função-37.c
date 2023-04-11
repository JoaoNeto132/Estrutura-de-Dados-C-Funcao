// Ex 37//
#include <stdio.h>

int Maximo(int a, int b, int c)
{
    int maior = a;
    if (b > maior)
    {
        maior = b;
    }
    if (c > maior)
    {
        maior = c;
    }
    return maior;
}

int main()
{
    int x, y, z, maior;
    printf("Digite tres numeros: ");
    scanf("%d %d %d", &x, &y, &z);
    maior = Maximo(x, y, z);
    printf("O maior numero e: %d", maior);
    return 0;
}