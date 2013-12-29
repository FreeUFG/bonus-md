#ifndef _PROPRIEDADES_H
#define _PROPRIEDADES_H

int ehReflexiva(int conjS_2[], int rho_2[][2], int tam_S, int qtd_par); // protótipo da funcao reflexiva
int ehSimetrica(int rho_2[][2], int qtd_par); // protótipo da funcao simetrica
int ehAntiSimetrica(int rho_2[][2], int qtd_par); // // protótipo da funcao anti-simetrica

int ehReflexiva(int conjS_2[], int rho_2[][2], int tam_S, int qtd_par) { // funcao para verificar se eh reflexiva, return 0 =  falso, return 1 = verdade.
    int i, j, k, cont = 0; // cont verifica se encontrou o par de x = (x,x)
    int refl = 0; // se refl = 3 eh porque os 3 elementos de S existe o (x,x) em rho

    for (i = 0; i < tam_S; i++) //For 1 - para verificar cada elemento do conjunto S. tam_S me manda a quantidade de elementos
    {
        cont = 0; //zerar o cont para verificar o proximo elemento em S
        for (j = 0; j < qtd_par; j++) // For 2 - Como eh uma matriz, este for varia a linha, qtd_par sabe quantos pares existe
        {
            for (k = 0; k < 2; k++) //For 3 - este for varia a coluna da matriz,
            {

                if (conjS_2[i] == rho_2[j][k]) { //verifica se x é = (x,);
                    k++;
                    if (conjS_2[i] == rho_2[j][k]) { //verifica se x é = ( ,x)
                        cont++; // x = (x,x)

                    } else { // caso x = (x, ), mas falso em x = ( , x) então já sai do For 3
                        k = 2;
                    }
                } else { // caso x = ( x, ) seja falso já sai do For 3
                    k = 2;
                }



            }
            if (cont == 1) { // se cont == 1 é se existe x = (x,x) entao (refle++) e então nem verifica os outros pares(j=qtd_par) 
                j = qtd_par;
                refl++;
            }

        }

    }
    if (refl == tam_S) {
        return 1;
    } else {
        return 0;
    }
}

int ehSimetrica(int rho_2[][2], int qtd_par) { // funcao para verificar se eh simetrica, return 0 =  falso, return 1 = verdade.
    int i, j, k, y; //variaveis para os 4 for.
    int cont = 0; // O "cont" conta quantos pares que existe simetrico existe e tem que ser igual a qtd_par 

    for (i = 0; i < qtd_par; i++) //For 1 = eh a linha da matriz ou o (i, ) dos pares
    {
        for (j = 0; j < 2; j++) //For 2 = eh a coluna da matriz ou o ( ,j) dos pares
        {
            if (rho_2[i][j] == rho_2[i][j + 1])// Pares iguais como (1,1) já são simetricos, assim já pula.
            {
                cont++; // Par eh simetrico
            } else //Senão foram iguais nos verificamos com os outros pares
            {
                for (k = 0; k < qtd_par; k++)//For 3 = verifica o par ([i,j],[i,j+1]) procurando o ([k,y+1],[k,y])
                {
                    for (y = 0; y < 2; y++) {
                        if (rho_2[k][y] != rho_2[k][y + 1])// Verifica se o par sao numeros diferentes, se for igual nao precisa verificar, pois já verificamos todos iguais antes
                        {
                            if ((rho_2[i][j + 1] == rho_2[k][y]) && (rho_2[i][j] == rho_2[k][y + 1])) //Faco esta verificacao ([i,j],[i,j+1]) == ([k,y+1],[k,y])
                            {
                                cont++; // Par eh simetrico
                                k = qtd_par; // Para de procurar, pois ja encontrou o simetrico
                            }

                        }

                        y = 2;

                    }
                }

            }
            j = 2;


        }

    }
    if (cont == qtd_par) // Todos os pares sao simetricos?
    {
        return 1; //Sim
    } else {
        return 0; //Nao
    }

}

int ehTransitiva() { // funcao para verificar se eh transitiva, return 0 =  falso, return 1 = verdade.
    return 0;
}

int ehAntiSimetrica(int rho_2[][2], int qtd_par) { // funcao para verificar se eh anti-simetrica, return 0 =  falso, return 1 = verdade.
    int i, j, k, y; //variaveis para os 4 for.
    int cont = 0; // O "cont" conta quantos pares que sao anti-simetrico existe e tem que ser igual a qtd_par 

    for (i = 0; i < qtd_par; i++) //For 1 = eh a linha da matriz ou o (i, ) dos pares
    {
        for (j = 0; j < 2; j++) //For 2 = eh a coluna da matriz ou o ( ,j) dos pares
        {
            if (rho_2[i][j] == rho_2[i][j + 1])// Pares iguais como (1,1) já são anti-simetricos, assim já pula.
            {
                cont++; // o par eh anti-simetrico
            } else //Senão foram iguais nos verificamos com os outros pares
            {
                for (k = 0; k < qtd_par; k++)//For 3 = verifica o par ([i,j],[i,j+1]) procurando o ([k,y+1],[k,y])
                {
                    for (y = 0; y < 2; y++) {
                        if (rho_2[k][y] != rho_2[k][y + 1])// Verifica se o par sao numeros diferentes, se for igual nao precisa verificar, pois já verificamos todos iguais antes
                        {
                            if ((rho_2[i][j + 1] == rho_2[k][y]) && (rho_2[i][j] == rho_2[k][y + 1])) //Faco esta verificacao ([i,j],[i,j+1]) == ([k,y+1],[k,y])
                            {
                                return 0; // Cai aqui quando encontra o par (3,4) e encontra o par (4,3) tambem e eles nao sao iguals

                            } else // nao encontrou o inverso, assim nao importa, este par eh anti-simetrico
                            {
                                cont++; // o par eh anti-simetrico
                                k = qtd_par; // Para de procurar
                            }

                        }

                        y = 2;

                    }
                }

            }
            j = 2;


        }

    }

    if (cont == qtd_par) // Todos os pares sao anti-simetricos?
    {
        return 1; //Sim
    } else {
        return 0; //Nao
    }

}

int ehEquivalencia() { // funcao para verificar se eh anti-simetrica, return 0 =  falso, return 1 = verdade.
    return 0;
}

#endif
