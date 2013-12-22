#ifndef _PROPRIEDADES_H
#define _PROPRIEDADES_H

int ehReflexiva(int conjS_2[], int rho_2[][2]); // protótipo da funcao reflexiva


int ehReflexiva(int conjS_2[], int rho_2[][2]) { // funcao para verificar se eh reflexiva, return 0 =  falso, return 1 = verdade.
    int i, j, k, cont = 0; // cont verifica se encontrou o par de x = (x,x)
    int refl = 0; // se refl = 3 eh porque os 3 elementos de S existe o (x,x) em rho
    
    for (i = 0; i < 3; i++) //For 1 - para verificar cada elemento do conjunto S
    {
        cont = 0; //zerar o cont para verificar o proximo elemento em S
        for (j = 0; j < 3; j++) // For 2 - Como eh uma matriz, este for varia a linha
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
                } else { // caso x = ( x, ) seja falto já sai do For 3
                    k = 2;
                }



            }
            if (cont == 1) { // se cont == 1 é se existe x = (x,x) entao (refle++) e então nem verifica os outros pares(j=3) 
                j = 3;
                refl++;
            }

        }

    }
    if (refl == 3) {
        return 1;
    } else {
        return 0;
    }
}

int ehSimetrica() { // funcao para verificar se eh simetrica, return 0 =  falso, return 1 = verdade.
    return 1;
}

int ehTransitiva() { // funcao para verificar se eh transitiva, return 0 =  falso, return 1 = verdade.
    return 0;
}

int ehAntiSimetrica() { // funcao para verificar se eh anti-simetrica, return 0 =  falso, return 1 = verdade.
    return 1;
}

int ehEquivalencia() { // funcao para verificar se eh anti-simetrica, return 0 =  falso, return 1 = verdade.
    return 0;
}

#endif
