#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define TRUE 1
#define FALSE 0
#define OK 0
#define ERROR 1

typedef struct elemento{
	int valor;
	struct elemento *sig;
}tipo_elemento;

typedef struct cola{
	tipo_elemento *cabeza,*final;
}tipo_cola;

void inicializar_cola(tipo_cola *cola);
int cola_vacia(tipo_cola cola);
int num_elems_cola(tipo_cola cola);
int cabeza(tipo_cola cola);
void encolar(tipo_cola *cola,int elemento);
void desencolar(tipo_cola *cola);
void imprimir (tipo_cola cola);

int main(){
	int op;
	int elemento;
	tipo_cola cola;
	inicializar_cola(&cola);
	do{
		printf("\n1 Encolar\n");
		printf("\n2 Desencolar\n");
		printf("\n3 Ver elementos\n");
		printf("\n4 Salir\n");
		if(cola_vacia(cola)) printf("\nvacia\n");
		printf("\nEn este momento la cola tiene %d\n",num_elems_cola(cola));
		scanf("%d",&op);
		switch (op){
			case 1:
				printf("Escribe el elemento a encolar\n");
				scanf("%d",&elemento);
				encolar(&cola,elemento);
				break;
			case 2:
				if (!cola_vacia(cola)){
					printf("Desencolando elemento %d\n",cabeza(cola));
					desencolar(&cola);
				}
				else 
					printf("Es imposible desencolar algo\n");
				break;
			case 3:
				if (!cola_vacia(cola)){
					printf("Los elemento son:\n");
					imprimir(cola);
				}
				else
					printf("Imposible mostrar elementos \n");
				break;
		}
	}while(op!='4');
	return 0;
}

void inicializar_cola(tipo_cola *cola){
	cola->cabeza=NULL;
	cola->final=NULL;
}

int cola_vacia(tipo_cola cola){
	if(cola.cabeza==NULL && cola.final==NULL)
		return TRUE;
	else 
		return FALSE;
}

int num_elems_cola(tipo_cola cola){
	int n=0;
	while(cola.cabeza != NULL){
		cola.cabeza->sig;
		n++;
	}
return n;
}

int cabeza(tipo_cola cola){
	return cola.cabeza->valor;
}

void encolar(tipo_cola *cola,int elemento){
	tipo_elemento *aux;
	aux=(tipo_elemento*)malloc(sizeof(tipo_elemento));
	aux->valor=elemento;
	aux->sig=NULL;
	if (cola_vacia(*cola))
		cola->cabeza=aux;
	else
		cola->final->sig=aux;
	cola->final=aux;
}

void desencolar(tipo_cola *cola){
	tipo_elemento *aux;
	aux=cola->cabeza;
	cola->cabeza=cola->cabeza->sig;
	if (cola->cabeza==NULL)
		cola->final=NULL;
	free(aux);
}

void imprimir(tipo_cola cola){
	int linea=1;
	while(cola.cabeza!=NULL){
		printf("%d. %d\n",linea, cola.cabeza->valor);
		cola.cabeza=cola.cabeza->sig;
		linea++;
	}
}
