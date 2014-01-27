#ifndef _PROPRIEDADES_H
#define _PROPRIEDADES_H

//@hcb13
int ehReflexiva(int conjS[], int tam_conj, int rho[][2], int qtd_pares ){
	int i;//percorrer o conjunto
	int j;//percorrer rho
	int c;//simular os pares
	for( i = 0; i < tam_conj; i++ ){
		c = conjS[i];
		for( j = 0; j < qtd_pares; j++){
			if( (rho[j][0] == c ) && ( rho[j][1] == c ) ){
				break;//axou um par reflexivo
			}
		}
		if( j == qtd_pares ){
			return 0;//nao encontrou par reflexivo
		}
	}
	return 1;//eh reflexiva a relacao
}

int ehSimetrica(int conjS[], int rho[][2], int qtd_pares ){
	int i, j, x, y;
	for( i = 0; i < qtd_pares; i++ ){
		x = rho[i][0];
		y = rho[i][1];
		for( j = 0; j < qtd_pares; j++ ){
			if( ( x == rho[j][1] ) && ( y == rho[j][0] ) ){
				break;//axou o par simetrico
			}
		}
		if( j == qtd_pares ){
			return 0;//nao axou par simetrico a x e y
		}
	}
	return 1;
}

int ehTransitiva( int conjS[], int rho[][2], int qtd_pares){
	int i, j, p, x1, y1, y2, z2;
	for( i = 0; i < qtd_pares; i++){
		x1 = rho[i][0];
		y1 = rho[i][1];
		for( j = 0;  j < qtd_pares; j++ ){
			y2 = rho[j][0];
			if( y1 == y2 ){
				z2 = rho[j][1];
				for( p = 0; p < qtd_pares; p++ ){
					if( ( x1 == rho[p][0] ) && ( z2 == rho[p][1] ) ){
						break;//encontrou par transitivo
					}
				}
				if( p == qtd_pares ){
					return 0;//nao encontrou
				}
			}
		}
	}
	return 1;//eh transitiva
}

int ehAntiSimetrica( int conjS[], int rho[][2], int qtd_pares){
	int i, j, x, y;
	for( i = 0; i < qtd_pares; i++ ){
		x = rho[i][0];
		y = rho[i][1];
		for( j = 0; j < qtd_pares; j++ ){
			if( ( x == rho[j][1] ) && ( y == rho[j][0] ) ){
				if( x == y ){
					break;//encontrou o par anti-simétrico
				}else{
					return 0;
				}
			}
		}
	}
	return 1;

}

int ehEquivalencia(int conjS[], int tam_conj, int rho[][2], int qtd_pares){
	if( (ehReflexiva(conjS, tam_conj, rho, qtd_pares) ) && ( ehSimetrica(conjS, rho, qtd_pares) ) && ( ehTransitiva(conjS, rho, qtd_pares) ) ){
		return 1;
	}
}

#endif
