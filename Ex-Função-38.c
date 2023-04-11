// Ex 38//
#include <stdio.h>

int Minimo(int a, int b, int c)
{
    int menor = a;
    if (b < menor)
    {
        menor = b;
    }
    if (c < menor)
    {
        menor = c;
    }
    return menor;
}

int main()
{
    int num1, num2, num3;
    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int menor = Minimo(num1, num2, num3);
    printf("O menor número é %d\n", menor);
    return 0;
}