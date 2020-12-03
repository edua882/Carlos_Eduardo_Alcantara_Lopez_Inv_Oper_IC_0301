#include "ruta.h"

int main(int argc, char *argv[]) {
	/**se definen 3 variables enteros*/
	int o,n,i;
	printf("ingrese el numero de vertices ");
	scanf("%i",&n);
	/**
	*@brief se ingresa los nodos
	*/
	for(i=0;i<n;i++){	
		insertarNodos();

	}
	
/**
  *@todo muestra el menu de opciones
  */
system("cls");
    do{

	printf("1.insertar vertice\n");
	printf("2.insertar arista\n");

	printf("escoje opcion\n");
    scanf("%i",&o);
	switch(o){
		case 1: insertarNodos();
		        break;
		case 2: insertarAristas();
		        break;
		case 3: break;
		default :printf("no existe");
	}
	system("pause");
	system("cls");
	}
	/**
	*@brief termina cuando es difernte de tres
	*/
	while(o!=3);
	return 0;
}
