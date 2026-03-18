#include <stdio.h>

int main() {

    /*
   printf(" ===============================================================\n");
    printf("                       BOLETIM DE NOTAS\n");                       
   printf(" ===============================================================\n");
   printf(" DISCIPLINA          A1   A2   A3    MF\n");
    printf("APC 1              5.2  2.3  6.0   5.6\n"); 
    printf("MATEMATICA DISC    6.0  5.0  -     5.0\n");
   printf(" CALCULO            4.0  4.0  -     4.0 \n");                   
   */     
  
    
   float nota_a1;
   float nota_a2;
   float nota_a3;
   float media_final;
   int codigo_disciplina;

   codigo_disciplina = 118;
   nota_a1 = 5.2f;
   nota_a2 = 2.3f;
   nota_a3 = 6.0f;
   media_final = 5.6f;

   printf(" ===============================================================\n");
   printf("|                       BOLETIM DE NOTAS                       |\n");                       
   printf(" ===============================================================\n");
    printf(" DISCIPLINA          A1   A2   A3    MF\n");

   printf("|%i        %8.1f  %8.1f %8.1f                                       |\n", codigo_disciplina, nota_a1, nota_a2, nota_a3, media_final);

   codigo_disciplina = 257;
   nota_a1 = 6.0f;
   nota_a2 = 5.0f;
   nota_a3 = 5.5f;
   media_final = 5.5f;
   printf("|%i        %8.1f  %8.1f %8.1f                                       |\n", codigo_disciplina, nota_a1, nota_a2, nota_a3, media_final);
  
   printf(" ===============================================================\n");
   return 0;

}