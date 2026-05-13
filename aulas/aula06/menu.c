#include <stdio.h>
int main () {
    int opcao = 0;

    do{
    printf("menu princiál\n");
    printf("1 - consultar saldo\n");
    printf("2 - recarregar\n");
    printf("3 - ver mensagens\n");
    printf("4 - ver ligacoes\n");
    printf("5 - sair\n");
    printf("escolha uma opcao\n");
    scanf("%i", &opcao);
    while (getchar() != '\n');

   
    

    switch(opcao){
        case 1: printf("seu saldo eh R$ 10,00\n"); break;
    case 2: printf("escolha entre 10, 20 e 50\n"); break;
    case 3: printf("voce nao tem mensagens\n"); break;
    case 4: printf("ultimas ligaçoes: 99999-9999\n"); break;
    case 5: printf("obrigada pelo contatop ate logo\n"); break;
    default: printf("opcao invalida! tente novamente.\n");


    }

    
    }while (opcao != 5);


    return 0;
}