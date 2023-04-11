// Ex 36//
#include <stdio.h>

int min(int a, int b)
{
    if (a < b)
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
    int x, y, menor;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    menor = min(x, y);
    printf("O menor numero e: %d", menor);
    return 0;
}