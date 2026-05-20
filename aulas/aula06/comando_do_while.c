#include <stdio.h>
int main () {
    int numero;

    do{
        printf("entre com o numero entre 1 e 10:\n");
        scanf ("%i", &numero);
        while(getchar () != '\n');

    }while (numero < 1 || numero > 10);

    return 0;
}