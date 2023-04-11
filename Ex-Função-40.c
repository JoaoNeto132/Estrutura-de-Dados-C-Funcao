// Ex 40//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Dado()
{
    return (rand() % 6) + 1;
}

int main()
{
    srand(time(NULL));

    int i, num, cont[6] = {0};
    for (i = 0; i < 1000000; i++)
    {
        num = Dado();
        cont[num - 1]++;
    }
    for (i = 0; i < 6; i++)
    {
        printf("O num %d saiu %d vezes.\n", i + 1, cont[i]);
    }

    return 0;
}