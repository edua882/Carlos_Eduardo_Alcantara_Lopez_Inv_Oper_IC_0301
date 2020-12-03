
#include "ruta.h"
/**
*@struct inicilizacion de los nodos lista de todos los nodos
*/
Nodos{
	char dato;
	Nodos*sig;
	Aristas*adyacente;
};
/**
*@struct estructura de la arista
*/
Aristas{
	Nodos*vertice;
	Aristas*sig;
};
/**inicializa lo que es el grafo*/
Nodos*inic=NULL;
/**
*@brief crea una estructura
*/
void insertarNodos(){
	/**inicializa el nodo*/
	Nodos*aux;
	/**se inserta otro nuevo nodo*/
	Nodos*nuevo=(Nodos*)malloc(sizeof(Nodos));
	fflush(stdin);
	printf("ingrese el vertice ");
	scanf("%c",&nuevo->dato);
	/**se inicializa un nuevo nodo*/
	nuevo->sig=NULL;
	nuevo->adyacente=NULL;
	/**
	*@brief se muestra si la lista de vertices esta vacia
	*/
	if (inic==NULL){
		inic=nuevo;
	}else{
		aux=inic;
		while(aux->sig!=NULL){
			aux=aux->sig;
		}
	/**cuando se llega al ultimo vertice*/	
		aux->sig=nuevo;
	}
}
/**
*@brief se agrega nueva funcion
*@param nuevos parametros
*/
void agregarAristas(Nodos*aux,Nodos*aux2,Aristas*nuevo){
	/**inicializa una arista*/
	Aristas*a;
	/*busca el primer nodo*/
	if(aux->adyacente==NULL){
		aux->adyacente=nuevo;
		nuevo->vertice=aux2;
	}
	/**
	*@todo la arista no esta vacia
	*/
	else{
		/**
		*@brief se inicializa la arista
		*/
		a=aux->adyacente;
		while(a->sig!=NULL)
		
		a=a->sig;
		nuevo->vertice=aux2;
		a->sig=nuevo;
	
}
}
/**
*brief inicializar las aristas
*/
void insertarAristas(){
	/**inicializa variables los vertices entrelazar*/
	char ini,final;
	/**inicializar una nueva arista*/
	Aristas*nuevo=(Aristas*)malloc(sizeof(Aristas));
	/**inializa dos nodos apuntadores*/
	Nodos*aux,*aux2;
	/**
	*@brief verifica que la lista de nodos no este vacia
	*/
	if(inic==NULL){
		printf("el grafo esta vacio");
		/**
		*@return termina si esta vacio
		*/
		return;
	}
	fflush(stdin);
	printf("ingresar el nodo inicio y final");
	scanf("%c %c", &ini,&final);
	aux=inic;
	aux2=inic;
	/**
	*brief encuentra los dos datos ingresados*/
	while(aux2!=NULL){
	   if(aux2->dato==final)
	
	break;
	aux2=aux2->sig;
}
/**
*@brief no se encontro los datos ingresados
*/
if(aux2==NULL){
	printf("no se encontro camino");
	/**
	*@return se termina la funcion
	*/
	return;
}
/**
*@brief se encontro los datos
*/
while(aux!=NULL){
	if(aux->dato==ini){
		/**
		*@param se agregan nuevos parametros
		*/
		agregarAristas(aux,aux2,nuevo);
		/**
		*@return retorna el resultado
		*/
		return;
	}
	aux=aux->sig;
}
/**
*@brief no se encontaron los datos
*/
if(aux==NULL){
	printf("vertice no se encontro");
	/**
	*@return no retorna nada
	*/
	return;
}

}
