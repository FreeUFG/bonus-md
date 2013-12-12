#ifndef _RELACOES_H
#define _RELACOES_H

#include "propriedades.h"

void relacao_01(){

    char nome[3] = "R01";
    int conjS[3] = {1,2,3};
    int rho[3][2] = { {1,2}, {3,2}, {1,1} };

    int reflexiva = 0;
    int simetrica = 0;
    int transitiva = 1;
    int anti_simetrica = 1;
    int equivalencia = 0;

    printf("\n");

    if(ehReflexiva() != reflexiva){
        printf("ERRO: [%s] - Problema na propriedade reflexiva!\n", nome);
    }
    if(ehSimetrica() != simetrica){
        printf("ERRO: [%s] - Problema na propriedade simetrica!\n", nome);
    }
    if(ehTransitiva() != transitiva){
        printf("ERRO: [%s] - Problema na propriedade transitiva!\n", nome);
    }
    if(ehAntiSimetrica() != anti_simetrica){
        printf("ERRO: [%s] - Problema na propriedade anti-simetrica!\n", nome);
    }
    if(ehEquivalencia() != equivalencia){
        printf("ERRO: [%s] - Problema na verifiacao da equivalencia!\n", nome);
    }
}

#endif
