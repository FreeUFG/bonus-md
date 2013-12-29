#ifndef _RELACOES_H
#define _RELACOES_H
#define S 4 // Define o tamanho do conjunto S, ou seja, quantos elementos tem no conjunto S
#define pares 5 // Define a quantidade de pares em rho


#include "propriedades.h"

void relacao_01(){

    char nome[3] = "R01";
    int conjS[S] = {1,2,3,4}; // Conjunto S definido
    int rho[pares][2] = { {3,4}, {3,3}, {2,2}, {1,1},{3,1}}; // rho já definido

    int reflexiva = 0; // (Vx E S -> (x,x)E rho). 0 = falso, 1 = verdade.
    int simetrica = 0; // (Vx,y E S ^ (x,y) E rho -> (y,x) E rho). 0 = falso, 1 = verdade.
    int transitiva = 1; // (Vx,y,z E S ^ (x,y) E rho ^ (y,z) E rho ^ -> (x,z) E rho). 0 = falso, 1 = verdade.
    int anti_simetrica = 1; // (Vx,y E S ^ (x,y) E rho ^ (y,x) E rho -> x=y). 0 = falso, 1 = verdade.
    int equivalencia = 0; // Verdade se reflexiva = 1, simetrica = 1 e trasitiva = 1,senão falso.  0 = falso, 1 = verdade.

    printf("\n");

    if(ehReflexiva(conjS, rho,S , pares) != reflexiva){
        printf("ERRO: [%s] - Problema na propriedade reflexiva!\n", nome);
    }
    if(ehSimetrica(rho, pares) != simetrica){
        printf("ERRO: [%s] - Problema na propriedade simetrica!\n", nome);
    }
    if(ehTransitiva() != transitiva){
        printf("ERRO: [%s] - Problema na propriedade transitiva!\n", nome);
    }
    if(ehAntiSimetrica(rho, pares) != anti_simetrica){
        printf("ERRO: [%s] - Problema na propriedade anti-simetrica!\n", nome);
    }
    if(ehEquivalencia() != equivalencia){
        printf("ERRO: [%s] - Problema na verifiacao da equivalencia!\n", nome);
    }
}

#endif
