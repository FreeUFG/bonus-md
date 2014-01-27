/*
    Copyright © 2013 FreeUFG.

    This file is part of BonusMD.

    BonusMD is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    BonusMD is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with BonusMD.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include "relacoes.h" //Biblioteca onde será definida o conjunto S e o rho

int main(){

    //Menu de opções [por @fonzaex]
    int opcao = 1;

    while(opcao>=1){
        printf("\n=======================================================\n");
        printf("=============== VERIFICANDO RELACOES ==================\n");
        printf("=======================================================\n");
        printf("1 - TESTAR RELACOES\n");
        printf("0 - SAIR DO PROGRAMA\n");
        printf("=======================================================\n");
        printf("INFORME A OPCAO PARA SER VERIFICADA:\n");
        scanf("%d",&opcao);
        printf("=======================================================\n");

        switch(opcao){
        case 0:
            opcao=-5;
            system("cls"); //Limpar o prompt (Windows) [por @bispojr]
            printf("=======================================================\n");
            printf("PROGRAMA FINALIZADO COM SUCESSO!\n");
            printf("=======================================================\n");
            break;
        case 1:
            system("cls"); //Limpar o prompt (Windows) [por @bispojr]
            relacao_01();
            relacao_02();
            relacao_03();
            relacao_04();
            relacao_05();
            relacao_06();
            relacao_07();
            break;
        default:
            opcao=-5;
            system("cls"); //Limpar o prompt (Windows) [por @bispojr]
            printf("=======================================================\n");
            printf("OPCAO INVALIDA, PROGRAMA FINALIZADO!\n");
            printf("=======================================================\n");
            break;
        }
    };

    return 0;
}
