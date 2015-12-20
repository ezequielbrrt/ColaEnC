#include "cola.h"
#include <stdio.h>
#include <stdlib.h>

Elemento *aux;

void inicializar_cola(Cola *cola){
	cola->inicial=NULL;
	cola->ultimo=NULL;
}

int cola_vacia(Cola cola){
	if(cola.inicial==NULL && cola.ultimo==NULL)
		return TRUE;
	else 
		return FALSE;
}
/*
char inicial(Cola cola){
	return cola.inicial->letra;
}*/


void push(Cola *cola,char elemento){

	aux=(Elemento*)malloc(sizeof(Elemento));
	aux->letra=elemento;
	aux->next=NULL;
	if (cola_vacia(*cola))
		cola->inicial=aux;
	else
		cola->ultimo->next=aux;
	cola->ultimo=elemento;
}

void imprimir(Cola cola){
	int linea=1;
	printf("\n");
	while(cola.inicial!=NULL){
		printf("%c,",cola.inicial->letra);
		cola.inicial=cola.inicial->next; //
		linea++;
	}
	printf("\n");
}
void pop(Cola *cola){

	aux=cola->inicial;
	cola->inicial=cola->inicial->next; //
		if (cola->inicial==NULL)
		cola->ultimo=NULL;
	free(aux);
}
