#include <stdio.h>

// Desafio de Xadrez - MateCheck (Novato)
 
int main() {

    // MOVIMENTAÇÂO DA TORRE - ESTRUTURA DE REPETIÇAO "FOR"

    printf ("\nTORRE cinco casas para a direita.\n");
    
    for ( int torre = 1 ; torre <= 5 ; torre++) {  // declaração da variavel ocorre dentro da propria estrutura, porém seu uso fica restrito a ela.
        printf ("Direita\n");        
    }


    // MOVIMENTAÇÂO DO BISPO - ESTURURA DE REPETIÇÂO "WHILE"

    printf ("\nBISPO cinco casas na diagonal para cima e à direita.\n");

    int bispo = 1; // variavel precisa ser declarada fora da estrutura

    while ( bispo <= 5 ) // condição é testada antes da execução do codigo. caso falso o codigo não é executado.
    {
        printf ("Cima, Direita\n");
        bispo++; // incremento ++ garante que a variante atinja um resultado falso, evitando assim um loop infinito.
    }
    


    // MOVIMENTAÇÂO DA RAINHA - ESTRUTURA DE REPETIÇÂO "DO-WHILE"

    printf ("\nRAINHA oito casas para a esquerda.\n");
    
    int rainha = 1;  // variavel precisa ser declarada fora da estrutura

    do{
        printf ("Esquerda\n");
        rainha++;  // incremento ++ garante que a variante atinja um resultado falso, evitando assim um loop infinito.
    } while ( rainha <= 8);  // condição é testada apos a execução do codigo, garantido assim pelo monos 1 execução.
    

    return 0;

}
