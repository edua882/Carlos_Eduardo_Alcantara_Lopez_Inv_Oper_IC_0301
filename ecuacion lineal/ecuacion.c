/**
*@file ecuacion.c
*/
#include "ecuacion.h"

/**define el ancho y lo alto*/
const int ANCHO=720,ALTO=720;
/**definen cuatro variables de tipo float*/
float x1,x2,y1,x2;
/**
*@brief se agrega nueva funcion dibujarLinea
*@param moverX,moverY,dibyjarX,dibujarY
*/
void dibujarLinea(int moveX,int moverY,int dibujarX,int dibujarY,int color){
	moveto(moverX,moverY);
	lineto(dibujarX,dibujarY);
}
/**
*@brief se agrega nueva funcion dibujarRecta
*@param x1,x2,y1,y2
*/
void dibujarRecta(float a,float b,float c){
	/**definen dos variables*/
	float x,y;
	/**@brief se crea el tamaño de la recta
    */
	for(x=-360;x<=360;x+=0.01){
		y=(-c-(a*x))/b;
		putpixel(360+x,360-y,yellow);		
	}
}
/**
*@brief se agrega nueva funcion pintarPlano
*/
void pintarPlano(){
	/**
  *@brief con los datos ingresados se crea la ecuacion resultante
  */
	initwindow(ANCHO,ALTO);
	dibujarLinea(0,ALTO/2,ANCHO/2,BLUE);
	dibujarLinea(ANCHO/2,0,ANCHO/2,ALTO,BLUE);
}	


