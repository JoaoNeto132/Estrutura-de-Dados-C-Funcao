// Ex 39//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Dado()
{
    srand(time(NULL));
    return rand() % 6 + 1;
}

int main()
{
    int numero = Dado();
    printf("O número sorteado é: %d\n", numero);
    return 0;
}