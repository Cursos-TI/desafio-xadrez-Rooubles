#include <stdio.h>

void torre (int casas) {  // procedimeto que define o movimento da torre
    if (casas > 0) {  // condição para execução do procedimento
        printf ("direita\n");  // imprime o sentido que a peça vai se mover
        torre (casas -1 );  // recursiva que possibilitará repedir o procedimento de acordo com a quantidade de movimentos que peça executará   
    }
}

void bispo (int casas) { // procedimeto que define o movimento do bispo
    if (casas > 0 ){  // condição para execução do procedimento
        for(int vertical = 1 ; vertical <=1 ; vertical++ ){  // loop externo que define o movimento vertical
            printf ("Cima, ");  // imprime o sentido vertical que a peça vai se mover
            for (int horizontal = 1 ; horizontal <= 1 ; horizontal++) { // loop interno que define o movimento horizontal
                printf ("Direita\n");  // imprime o sentido horizontal que a peça vai se mover
            }
        }
        bispo(casas - 1 );  // recursiva que possibilitará repedir o procedimento de acordo com a quantidade de movimentos que peça executará
    }       
}

void rainha (int casas) { // procedimeto que define o movimento da rainha
    if (casas > 0) {  // condição para execução do procedimento
        printf ("esquerda\n"); // imprime o sentido que a peça vai se mover
        rainha (casas -1); // recursiva que possibilitará repedir o procedimento de acordo com a quantidade de movimentos que peça executará
    } 
}

void cavalo (int casas) { // procedimeto que define o movimento do cavalo
    if (casas > 0 ) {  // condição para execução do procedimento
        for ( int i = 1 , j = 1 ; i <= 2 ; i++ , j++ ) {  // i para primeira parte do movimento e j para a segunda.
            printf ("Cima\n"); // imprime o sentido que a peça vai se mover
            if (j % 2 == 0 ) { printf ("Direita\n"); } // imprime o sentido que a peça vai se mover
        }
        cavalo (casas - 1);  // recursiva que possibilitará repedir o procedimento de acordo com a quantidade de movimentos que peça executará
    }     
}

int main() {

    printf ("\nTORRE cinco casas para a direita.\n");
        int movimento_torre = 5 ;  // define a quantidade de vezes que a peça irá se mover
        torre (movimento_torre);  // chama o procedimento que define a movimentação da peça

    printf ("\nBISPO cinco casas na diagonal para cima e a direita.\n");
        int movimento_bispo = 5;  // define a quantidade de vezes que a peça irá se mover
        bispo(movimento_bispo);  // chama o procedimento que define a movimentação da peça

    printf ("\nRAINHA oito casas para a esquerda.\n");
        int movimento_rainha = 8;  // define a quantidade de vezes que a peça irá se mover
        rainha (movimento_rainha);  // chama o procedimento que define a movimentação da peça

    printf ("\nCAVALO duas casas para cima e uma para direita.\n");
        int movimento_cavalo = 1;  // define a quantidade de vezes que a peça irá se mover
        cavalo (movimento_cavalo);  // chama o procedimento que define a movimentação da peça
return 0;
}