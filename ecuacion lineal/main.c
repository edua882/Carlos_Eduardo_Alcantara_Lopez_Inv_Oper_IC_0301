/**
*@file main.c
*/

#include <funciones.h>

/**
*@brief funcion principal de la ecuacion
*/
int main(int argc, char *argv[]) {
	/**define cuatro variables enteros*/
	double x1,x2,y1,y2;
	/**define dos variables enteros*/
	int res,resu;
	/**
  *@todo muestra para que ingrese los datos
  */
	printf("ingrese la coordenada en x1: ");
	scanf("%d",&x1);
	printf("ingrese la coordenada en x2: ");
	scanf("%d",&x2);
	printf("ingrese la coordenada en y1: ");
	scanf("%d",&y1);
	printf("ingrese la coordenada en y2: ");
	scanf("%d",&y2);
	res=(y2-y1)/(x2-x1);
	resu=(-(y2-y1)*x1/(x2-x1)+y1);
	/**
	*@brief cuando en diferente
	*/
	if(x1==x2){
		printf("no existe ecuacion lineal");
	}
	/**
	*@brief cuando es igual a los datos
	*/
	else{
		printf("la ecuacion es y=%dx+%d",res,resu);
	}
	system("pause");
	pintarPlano();
	dibujarRecta(x1,x2,x3,x4);
	getch();
	/**
	*@brief cierra el programa de graficacion
	*/
	closegraph();
    /**
	*@return todo termina en 0
	*/
	return 0;
}
