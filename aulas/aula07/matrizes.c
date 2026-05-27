#include <stdio.h>

int main(){
    int tabela[3][3];
    //   0 1 2 
    //0 | | | | 
    //1 | | | |
    //2 | | | |

    tabela[0][0]= 1;
     //  0 1 2 
    //0 |1|| | 
    //1 | | | |
    //2 | | | |

    tabela[0][1]=0;
    //   0 1 2 
    //0 |1|0| | 
    //1 | | | |
    //2 | | | |

    tabela [0][2]=1;
    //   0 1 2 
    //0 |1|0|1| 
    //1 | | | |
    //2 | | | |

    tabela [1][0]=1;
    //   0 1 2 
    //0 |1|0|1| 
    //1 |0| | |
    //2 | | | |

    for (int i = 0; i < 3; i++) {//percorre a linha 
        for (int j = 0; j)
        print("entre com a posiçao[%i,%i]:", i, j);//percorre a coluna 
        scanf("%i", &tabela[i][j]);
    }
        printf("a tabela ficou assim:\n");
for (int i = 0; i < 3; i++) {//percorre a linha
    for (int j = 0; j < 3; j++) {
    printf("%i", tabela[i][j]);
    }  
    printf("\n");
       
}
    return 0;
}