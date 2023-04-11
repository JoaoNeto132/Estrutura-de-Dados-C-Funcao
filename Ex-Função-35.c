// Ex 35//
#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int x, y, maior;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    maior = max(x, y);
    printf("O maior numero e: %d", maior);
    return 0;
}