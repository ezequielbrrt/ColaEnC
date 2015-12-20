#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//#include <alloc.h>

void insertar(void);
void extraer(void);
void visualizar(void);

struct cola
{
	char nombre[20];
	struct cola *sig;
}*CAB=NULL,*AUX=NULL,*FIN=NULL;


int main(){
	int opc;

	while(1){
		printf("1.- Insertar\n");
		printf("2.- Extraer\n");
		printf("3.- Visualizar\n");
		printf("4.- Salir\n");
		scanf("%d",&opc);
		insertar();
		//extraer();
		//visualizar();
		//if (opc==1) insertar();
		if (opc==2) extraer();
		if (opc==3) visualizar();
		if (opc==4) return 0;
		opc=0;
		
	}
}

void insertar(void){
	AUX=(struct cola*)malloc(sizeof(struct cola));
	//printf("Letra\n");
	gets(AUX->nombre);
	//*nombre="hoa";
	//AUX->nombre;
	AUX->sig=NULL;
	if (FIN==NULL)
		FIN=CAB=AUX;
	else{
		FIN->sig=AUX;
		FIN=AUX;
	}
}

void extraer(void){
	if (CAB==NULL) return;
	AUX=CAB;
	CAB=CAB->sig;
	free(AUX);
}


void visualizar(void){
	if (CAB==NULL)return;
	AUX=CAB;
	while(AUX!=NULL){
		printf("Letra %s\n",AUX->nombre);
		AUX=AUX->sig;
	}
}
