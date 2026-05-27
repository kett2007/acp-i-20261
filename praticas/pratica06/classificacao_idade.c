#include <stdio.h>

int main () {
int idade;
    printf("digite sua idade\n");
    scanf("%i", &idade);
      if (idade <= 12 ) {
        printf("voce e crianca\n");
       } else if (idade ==13 || idade <= 17){
        printf("voce e adolecente\n");
       }else if (idade ==18 || idade <=64){
        printf("voce e adulto\n");
       }else if(idade > 64) {
        printf("voce e idoso\n");
       }
       
      
       return 0; 
        }


    

