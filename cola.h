#ifndef COLA_H
#define COLA_H
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define OK 0
#define ERROR 1



typedef struct elmento{
	char letra;
	struct elemento *next;
}Elemento;

typedef struct cola{
	Elemento *inicial;
	Elemento *ultimo;
}Cola; 


void inicializar_cola(Cola *cola);
void push(Cola *cola,char elemento);
int cola_vacia(Cola cola);
//char inicial(Cola cola);
void imprimir(Cola cola);
void pop(Cola *cola);


#endif
