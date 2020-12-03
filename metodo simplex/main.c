
/**
*@file main.c
*/
#include <stdio.h>
#include <stdlib.h>


/**
*@brief funcion principal de la matriz
*/
int main(int argc, char *argv[]) {
	
    /**se piden los datos a ingresar y se guardan*/
	printf("\ningresa el numero de restricciones");
	scanf("%d",&restri);
	/**se piden los datos a ingresar y se guardan*/
	matriz[filas-1][0]=1;
    printf("\ningresa la funcion a maximizar");
    /**se piden los datos a ingresar y se guardan*/
    printf("\ningresa variable x1");
    scanf("%f",&zx1);
    zx1=zx1*-1;
    matriz[filas-1][1]=zx1;
    /**se piden los datos a ingresar y se guardan*/
    printf("\ningresa variable x2");
    scanf("%f",&zx2);
    zx2=zx2*-1;
    matriz[filas-1][2]=zx2;
    /**se piden los datos a ingresar y se guardan*/
    printf("\ningresa las %d funciones de restricciones",restri);
    /**
	*@brief se van pidiendo los datos y se gurdan en la matriz
	*/
	for(i=0;i<restri;i++){
    	printf("\ningresa x1 de la restriccion %d ",i+1);
    	scanf("%f",&matriz[i][1]);
    	printf("\ningresa x2 de la restriccion %d ",i+1);
    	scanf("%f",&matriz[i][2]);
    	printf("\ningresa resultado de la restriccion %d ",i+1);
    	scanf("%f",&matriz[i][columnas-1]);
	}
	
	printf("TABLA SIMPLEX\n");
	/**
	*@brief muestra el resultado de la primera tabla
	*/
	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			printf("%f ",matriz[i][j]);
			if(j==columnas-1){
			printf("\n");	
			}
		}
	}
		/**
  *@todo muestra para que ingrese los datos
  */
	printf("\nelemento pivote es %d ",pivote);
	printf("\nen la fila %d ",nofila+1);
	printf("\nen la columna %d ",nocolumna+1);
	printf("\n\nresultado de la tabla despues de dividir entre el pivote");
	printf("\n");
		printf("\nresultado de la tabla");
	printf("\n");
	/**
	*@brief da el reusltado de la tabla completa
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
	*@brief los datos ingresados dan resultado
	*/
	i=0;
	while(i<nocolumna){
		i=i+1;
	}
	/**
	*@brief se igualan filas y columnas
	*/
	if(i==1){
		j=2;
	}
	/**
	*@brief cuando es diferente la columna
	*/
	else j=1;
		/**
  *@todo muestra para que ingrese los datos
  */
	printf("\nresultado de la funcion z= %fx1 + %fx2 es: ",zx1*-1,zx2*-1);
	printf("\nresultado de z es: %f",matriz[filas-1][columnas-1]);
	printf("\nresultado de x %d es: %f",i,matriz[nofila][columnas-1]);
	printf("\nresultado de x %d es: %d \a",j,0);

		
	return 0;
}
