#ifndef _PROPRIEDADES_H
#define _PROPRIEDADES_H

//Função ehReflexiva [por @fonzaex]
//[Adaptada por @bispojr]
int ehReflexiva(int rho2[][2]);
int ehReflexiva(int rho2[][2]){

    //AINDA FALTA PASSAR O VALOR DO CONJS POR REFERENCIA E VERIFICAR SE TODO X PERTENCE AO COJUNTO S;
    //MOSTRANDO OS SUBCONJUNTOS, EM FORMA DE MATRIZ

    //UNICA LOGICA QUE ACHEI FOI ESSA, DEVE-SE IMPLEMENTAR EM CIMA NOS LAÇOS FOR
    if(rho2[0][0]==rho2[0][1] && rho2[1][0]==rho2[1][1] && rho2[2][0]==rho2[2][1]){
        return 1;
    }
    else{
        return 0;
    }
}
int ehSimetrica(){
    return 1;
}
int ehTransitiva(){
    return 0;
}
int ehAntiSimetrica(){
    return 1;
}
int ehEquivalencia(){
    return 0;
}

#endif
