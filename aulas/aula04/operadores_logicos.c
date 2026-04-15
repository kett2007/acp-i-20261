#include <stdio.h>
int main () {
    int idade;

    printf("entre com a sua idade : ");
    scanf ("%i", &idade);
    while(getchar () != '\n');

    printf("voce eh uma crinaca? %i\n", idade >= 0 && idade <= 12);
    //&& => 0 falso E quaçquer coisa = sempre falso

    // && ||= falso E qualquer coisa = sempre falsos
    printf("voce tem prioridade para vacinar? %i\n", idade <= 6 || idade >=60);

    //! => nao verdadeiro = falso, nao falso = verdadeiro
    printf("voce naum pode votar? %i\n", !(idade >= 16));

    printf("voce eh um adolecente? %i\n", idade > 12 && idade < 16);
    printf("voce eh um jovem? %i\n", idade >= 16 && idade <= 20);

    return 0;
}