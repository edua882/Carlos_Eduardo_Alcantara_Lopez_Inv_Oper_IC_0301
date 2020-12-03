/**
*@file matriz.c
*/
#include "matriz.h"
/**se define el tamaño de la matriz*/
filas=restri+1;
	columnas=4+restri;
	float matriz[filas][columnas];
	for(i=0;i<filas;i++){
	for(j=0;j<columnas;j++){
	matriz[i][j]=0;
    }
    }
/**cuando se ingresan las restriciones se va modificando */
menorc=matriz[filas-1][0];
	for(i=0;i<columnas;i++){
		if(matriz[filas-1][i]<menorc){
			menorc=matriz[filas-1][i];
			nocolumna=i;
		}
	}
	/**se hace la otra matriz cuando se eliminan */
	menorb=matriz[0][columnas-1];
	float matriz2[filas][1];
	for(i=0;i<filas-2;i++){
		matriz2[i][0]=matriz[i][columnas-1]/matriz[i][nocolumna];
		if(matriz2[i][0]<menorb){
			menorb=matriz2[i][0];
			nofila=i;
		}
	}
	/**cuando la fila pivote se crea*/
	pivote=matriz[nofila][nocolumna];
	for(i=0;i<columnas;i++){
		matriz[nofila][i]=matriz[nofila][i]/pivote;
		}
	/**
	*@brief se muestra el resultado del pivote
	*/
for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
		printf("%f ",matriz[i][j]);
		if(j == columnas-1){
			printf("\n");
	
		}
	
	}	
    }
    	/**
	*@brief la matriz se le resta la fila
	*/
	for(i=0;i<nofila;i++){
    	a=matriz[i][nocolumna];
    	for(j=0;j<columnas;j++){
    		matriz[i][j]=matriz[i][j]-(a*matriz[nofila][j]);
		}
	}
		/**
	*@brief la matriz sale completa
	*/
	for(i=nofila+1;i<filas;i++){
    	a=matriz[i][nocolumna];
    	for(j=0;j<columnas;j++){
    		matriz[i][j]=matriz[i][j]-(a*matriz[nofila][j]);
		}
	}		    
