#include <stdio.h>

// Conta a qtde de numeros pares e impares

int ckdig(int n, int *p, int *i)
{
    int d = 0;

    if (n < 0)
        n = -n;
    *p = *i = 0;

    while (n)
    {
        if ((n % 2) == 0)
            (*p)++;
        else
            (*i)++;

        n /= 10;
        d++;
    }
    return d;
}

int main(int argc, char **argv)
{
    int n, p, i, d;

    puts("Digite um numero:");
    scanf("%d", &n);

    d = ckdig(n, &p, &i);

    printf("Dentre os %d digitos, ha %d pares e %d impares.\n", d, p, i);
    getchar();
    getchar();
}
