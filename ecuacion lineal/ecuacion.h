/**
*@file ecuacion.h
*/
#ifndef _ecuacion_h
#define __ecuacion_h
#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**define el ancho y lo alto*/
const int ANCHO=720,ALTO=720;
/**definen cuatro variables de tipo float*/
float x1,x2,y1,x2;
/**
*@brief se agrega nueva funcion dibujarLinea
*@param moverX,moverY,dibyjarX,dibujarY
*/
void dibujarLinea(int moverX,int moverY,int dibujarX,int dibujarY);
/**
*@brief se agrega nueva funcion dibujarRecta
*@param x1,x2,y1,y2
*/
void dibujarRecta(float x1,float x2,float y1,float y2);
 /**
*@brief se agrega nueva funcion pintarPlano
*/
void pintarPlano(); 

#endif
