#ifndef _RELACOES_H
#define _RELACOES_H

#include "propriedades.h"

void relacao_01(){

    char nome[4] = "R01";
    int conjS[3] = {1,2,3}; // Conjunto S definido
    int rho[3][2] = { {1,2}, {3,2}, {1,1} }; // rho já definido

    int reflexiva = 0;          //Valor 0: Relação NÃO é reflexiva
    int simetrica = 0;          //Valor 0: Relação NÃO é simétrica
    int transitiva = 1;         //Valor 1: Relação É transitiva
    int anti_simetrica = 1;     //Valor 1: Relação É anti-simétrica
    int equivalencia = 0;       //Valor 0: Relação NÃO é uma equivalência

    printf("\n");

    if(ehReflexiva( conjS, 3, rho, 3) != reflexiva){
		printf("ERRO: [%s] - Problema na propriedade reflexiva!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade reflexiva!\n", nome );
	}
	if(ehSimetrica(conjS, rho, 3) != simetrica){
		printf("ERRO: [%s] - Problema na propriedade simetrica!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade simetrica!\n", nome );
	}
	if(ehTransitiva(conjS, rho, 3) != transitiva){
		printf("ERRO: [%s] - Problema na propriedade transitiva!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade transitiva!\n", nome );
	}
	if(ehAntiSimetrica(conjS, rho, 3) != anti_simetrica){
		printf("ERRO: [%s] - Problema na propriedade anti-simetrica!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade anti-simetrica!\n", nome );
	}
	if(ehEquivalencia(conjS, 3, rho, 3) != equivalencia){
		printf("ERRO: [%s] - Problema na verifiacao da equivalencia!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade de equivalencia!\n", nome );
	}

	printf("\nLogo, a relacao %s\n", nome);
	if( reflexiva ){
		printf("\teh reflexiva\n");
	}else{
		printf("\tnao eh reflexiva\n");
	}
	if( transitiva ){
		printf("\teh transtiva\n");
	}else{
		printf("\tnao eh transtiva\n");
	}
	if( simetrica ){
		printf("\teh simetrica\n");
	}else{
		printf("\tnao eh simetrica\n");
	}
	if( anti_simetrica ){
		printf("\teh anti-simetrica\n");
	}else{
		printf("\tnao eh anti-simetrica\n");
	}
	if( equivalencia ){
		printf("\teh equivalente\n");
	}else{
		printf("\tnao eh equivalente\n");
	}
}

//Relação 02 [por @bispojr]
void relacao_02(){

    char nome[4] = "R02";
    int conjS[3] = {1,2,3};
    int rho[5][2] = { {1,1}, {1,2}, {2,1}, {2,2}, {3,3} };

    int reflexiva = 1;          //Valor 1: Relação É reflexiva
    int simetrica = 1;          //Valor 1: Relação É simétrica
    int transitiva = 1;         //Valor 1: Relação É transitiva
    int anti_simetrica = 0;     //Valor 0: Relação NÃO É anti-simétrica
    int equivalencia = 1;       //Valor 1: Relação É uma equivalência

    printf("\n");

    if(ehReflexiva( conjS, 3, rho, 5) != reflexiva){
		printf("ERRO: [%s] - Problema na propriedade reflexiva!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade reflexiva!\n", nome );
	}
	if(ehSimetrica(conjS, rho, 5) != simetrica){
		printf("ERRO: [%s] - Problema na propriedade simetrica!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade simetrica!\n", nome );
	}
	if(ehTransitiva(conjS, rho, 5) != transitiva){
		printf("ERRO: [%s] - Problema na propriedade transitiva!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade transitiva!\n", nome );
	}
	if(ehAntiSimetrica(conjS, rho, 5) != anti_simetrica){
		printf("ERRO: [%s] - Problema na propriedade anti-simetrica!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade anti-simetrica!\n", nome );
	}
	if(ehEquivalencia(conjS, 3, rho, 5) != equivalencia){
		printf("ERRO: [%s] - Problema na verifiacao da equivalencia!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade de equivalencia!\n", nome );
	}

	printf("\nLogo, a relacao %s\n", nome);
	if( reflexiva ){
		printf("\teh reflexiva\n");
	}else{
		printf("\tnao eh reflexiva\n");
	}
	if( transitiva ){
		printf("\teh transtiva\n");
	}else{
		printf("\tnao eh transtiva\n");
	}
	if( simetrica ){
		printf("\teh simetrica\n");
	}else{
		printf("\tnao eh simetrica\n");
	}
	if( anti_simetrica ){
		printf("\teh anti-simetrica\n");
	}else{
		printf("\tnao eh anti-simetrica\n");
	}
	if( equivalencia ){
		printf("\teh equivalente\n");
	}else{
		printf("\tnao eh equivalente\n");
	}
}

//Relação 03 [por @bispojr]
void relacao_03(){

    char nome[4] = "R03";
    int conjS[3] = {1,2,3};
    int rho[6][2] = { {1,1}, {2,2}, {2,3}, {3,2}, {1,3}, {3,1} };

    int reflexiva = 0;          //Valor 0: Relação NÃO é reflexiva
    int simetrica = 1;          //Valor 1: Relação É simétrica
    // int transitiva = 1;         //Valor 1: Relação É transitiva
    int transitiva = 0;			  //essa relação não eh transitiva pois não há par (2,1)
    int anti_simetrica = 0;     //Valor 0: Relação NÃO É anti-simétrica
    int equivalencia = 0;       //Valor 0: Relação NÃO é uma equivalência

    printf("\n");

    if(ehReflexiva( conjS, 3, rho, 6) != reflexiva){
		printf("ERRO: [%s] - Problema na propriedade reflexiva!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade reflexiva!\n", nome );
	}
	if(ehSimetrica(conjS, rho, 6) != simetrica){
		printf("ERRO: [%s] - Problema na propriedade simetrica!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade simetrica!\n", nome );
	}
	if(ehTransitiva(conjS, rho, 6) != transitiva){
		printf("ERRO: [%s] - Problema na propriedade transitiva!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade transitiva!\n", nome );
	}
	if(ehAntiSimetrica(conjS, rho, 6) != anti_simetrica){
		printf("ERRO: [%s] - Problema na propriedade anti-simetrica!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade anti-simetrica!\n", nome );
	}
	if(ehEquivalencia(conjS, 3, rho, 6) != equivalencia){
		printf("ERRO: [%s] - Problema na verifiacao da equivalencia!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade de equivalencia!\n", nome );
	}

	printf("\nLogo, a relacao %s\n", nome);
	if( reflexiva ){
		printf("\teh reflexiva\n");
	}else{
		printf("\tnao eh reflexiva\n");
	}
	if( transitiva ){
		printf("\teh transtiva\n");
	}else{
		printf("\tnao eh transtiva\n");
	}
	if( simetrica ){
		printf("\teh simetrica\n");
	}else{
		printf("\tnao eh simetrica\n");
	}
	if( anti_simetrica ){
		printf("\teh anti-simetrica\n");
	}else{
		printf("\tnao eh anti-simetrica\n");
	}
	if( equivalencia ){
		printf("\teh equivalente\n");
	}else{
		printf("\tnao eh equivalente\n");
	}
}

void relacao_04(){

    char nome[4] = "R04";
    int conjS[3] = {1,2,3};
    int rho[3][2] = { {1,2}, {3,2}, {1,1} };

    int reflexiva = 0;
    int simetrica = 0;
    int transitiva = 1;
    int anti_simetrica = 1;
    int equivalencia = 0;

    printf("\n");

    if(ehReflexiva( conjS, 3, rho, 3) != reflexiva){
		printf("ERRO: [%s] - Problema na propriedade reflexiva!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade reflexiva!\n", nome );
	}
	if(ehSimetrica(conjS, rho, 3) != simetrica){
		printf("ERRO: [%s] - Problema na propriedade simetrica!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade simetrica!\n", nome );
	}
	if(ehTransitiva(conjS, rho, 3) != transitiva){
		printf("ERRO: [%s] - Problema na propriedade transitiva!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade transitiva!\n", nome );
	}
	if(ehAntiSimetrica(conjS, rho, 3) != anti_simetrica){
		printf("ERRO: [%s] - Problema na propriedade anti-simetrica!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade anti-simetrica!\n", nome );
	}
	if(ehEquivalencia(conjS, 3, rho, 3) != equivalencia){
		printf("ERRO: [%s] - Problema na verifiacao da equivalencia!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade de equivalencia!\n", nome );
	}

	printf("\nLogo, a relacao %s\n", nome);
	if( reflexiva ){
		printf("\teh reflexiva\n");
	}else{
		printf("\tnao eh reflexiva\n");
	}
	if( transitiva ){
		printf("\teh transtiva\n");
	}else{
		printf("\tnao eh transtiva\n");
	}
	if( simetrica ){
		printf("\teh simetrica\n");
	}else{
		printf("\tnao eh simetrica\n");
	}
	if( anti_simetrica ){
		printf("\teh anti-simetrica\n");
	}else{
		printf("\tnao eh anti-simetrica\n");
	}
	if( equivalencia ){
		printf("\teh equivalente\n");
	}else{
		printf("\tnao eh equivalente\n");
	}
}

void relacao_05(){
	char nome[4] = "R05";
	int conjS[5] = {1,2};
	int rho[10][2] = { {2,1}, {1,2}, {2,2}, {1,1} };

	int reflexiva = 1;
	int simetrica = 1;
	int transitiva = 1;
	int anti_simetrica = 0;
	int equivalencia = 1;

	printf("\n");

	    if(ehReflexiva( conjS, 5, rho, 10) != reflexiva){
		printf("ERRO: [%s] - Problema na propriedade reflexiva!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade reflexiva!\n", nome );
	}
	if(ehSimetrica(conjS, rho, 10) != simetrica){
		printf("ERRO: [%s] - Problema na propriedade simetrica!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade simetrica!\n", nome );
	}
	if(ehTransitiva(conjS, rho, 10) != transitiva){
		printf("ERRO: [%s] - Problema na propriedade transitiva!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade transitiva!\n", nome );
	}
	if(ehAntiSimetrica(conjS, rho, 10) != anti_simetrica){
		printf("ERRO: [%s] - Problema na propriedade anti-simetrica!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade anti-simetrica!\n", nome );
	}
	if(ehEquivalencia(conjS, 5, rho, 10) != equivalencia){
		printf("ERRO: [%s] - Problema na verifiacao da equivalencia!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade de equivalencia!\n", nome );
	}

	printf("\nLogo, a relacao %s\n", nome);
	if( reflexiva ){
		printf("\teh reflexiva\n");
	}else{
		printf("\tnao eh reflexiva\n");
	}
	if( transitiva ){
		printf("\teh transtiva\n");
	}else{
		printf("\tnao eh transtiva\n");
	}
	if( simetrica ){
		printf("\teh simetrica\n");
	}else{
		printf("\tnao eh simetrica\n");
	}
	if( anti_simetrica ){
		printf("\teh anti-simetrica\n");
	}else{
		printf("\tnao eh anti-simetrica\n");
	}
	if( equivalencia ){
		printf("\teh equivalente\n");
	}else{
		printf("\tnao eh equivalente\n");
	}
}

void relacao_06(){

	char nome[4] = "R06";
	int conjS[3] = {1,2,3};
	int rho[2][2] = { {1,2}, {3,2} };

	int reflexiva = 0;
	int simetrica = 0;
	int transitiva = 1;
	int anti_simetrica = 1;
	int equivalencia = 0;

	printf("\n");

   if(ehReflexiva( conjS, 3, rho, 2) != reflexiva){
		printf("ERRO: [%s] - Problema na propriedade reflexiva!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade reflexiva!\n", nome );
	}
	if(ehSimetrica(conjS, rho, 2) != simetrica){
		printf("ERRO: [%s] - Problema na propriedade simetrica!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade simetrica!\n", nome );
	}
	if(ehTransitiva(conjS, rho, 2) != transitiva){
		printf("ERRO: [%s] - Problema na propriedade transitiva!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade transitiva!\n", nome );
	}
	if(ehAntiSimetrica(conjS, rho, 2) != anti_simetrica){
		printf("ERRO: [%s] - Problema na propriedade anti-simetrica!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade anti-simetrica!\n", nome );
	}
	if(ehEquivalencia(conjS, 3, rho, 2) != equivalencia){
		printf("ERRO: [%s] - Problema na verifiacao da equivalencia!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade de equivalencia!\n", nome );
	}

	printf("\nLogo, a relacao %s\n", nome);
	if( reflexiva ){
		printf("\teh reflexiva\n");
	}else{
		printf("\tnao eh reflexiva\n");
	}
	if( transitiva ){
		printf("\teh transtiva\n");
	}else{
		printf("\tnao eh transtiva\n");
	}
	if( simetrica ){
		printf("\teh simetrica\n");
	}else{
		printf("\tnao eh simetrica\n");
	}
	if( anti_simetrica ){
		printf("\teh anti-simetrica\n");
	}else{
		printf("\tnao eh anti-simetrica\n");
	}
	if( equivalencia ){
		printf("\teh equivalente\n");
	}else{
		printf("\tnao eh equivalente\n");
	}
}


void relacao_07(){


	char nome[4] = "R07";
	int conjS[3] = {5,4,6};
	int rho[9][2] = { {6,4},{4,6}, {6,6}, {4,5},{6,5},{4,4}, {5,4}, {5,6}, {5,5} };

	int reflexiva = 1;
	int simetrica = 1;
	int transitiva = 1;
	int anti_simetrica = 0;
	int equivalencia = 1;

	printf("\n");

    if(ehReflexiva( conjS, 3, rho, 9) != reflexiva){
		printf("ERRO: [%s] - Problema na propriedade reflexiva!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade reflexiva!\n", nome );
	}
	if(ehSimetrica(conjS, rho, 9) != simetrica){
		printf("ERRO: [%s] - Problema na propriedade simetrica!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade simetrica!\n", nome );
	}
	if(ehTransitiva(conjS, rho, 9) != transitiva){
		printf("ERRO: [%s] - Problema na propriedade transitiva!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade transitiva!\n", nome );
	}
	if(ehAntiSimetrica(conjS, rho, 9) != anti_simetrica){
		printf("ERRO: [%s] - Problema na propriedade anti-simetrica!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade anti-simetrica!\n", nome );
	}
	if(ehEquivalencia(conjS, 3, rho, 9) != equivalencia){
		printf("ERRO: [%s] - Problema na verifiacao da equivalencia!\n", nome);
	}else{
		printf("Sucesso: [%s] Bate com a propriedade de equivalencia!\n", nome );
	}

	printf("\nLogo, a relacao %s\n", nome);
	if( reflexiva ){
		printf("\teh reflexiva\n");
	}else{
		printf("\tnao eh reflexiva\n");
	}
	if( transitiva ){
		printf("\teh transtiva\n");
	}else{
		printf("\tnao eh transtiva\n");
	}
	if( simetrica ){
		printf("\teh simetrica\n");
	}else{
		printf("\tnao eh simetrica\n");
	}
	if( anti_simetrica ){
		printf("\teh anti-simetrica\n");
	}else{
		printf("\tnao eh anti-simetrica\n");
	}
	if( equivalencia ){
		printf("\teh equivalente\n");
	}else{
		printf("\tnao eh equivalente\n");
	}
}


#endif
