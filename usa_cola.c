#include "cola.h"

int main(){
	
//nueva_cola();
	int op;
	char elemento,ele;
	Cola cola; 
	inicializar_cola(&cola);
	
	while(1){
	
	printf("\nSi quieres agregar un Elemento a la cola, presiona 1\n");
	printf("Si quieres sacar el Elemento inicial de la cola, presiona 2\n");
	printf("Salir 3\n");
	scanf("%d",&op);

	
	switch(op){
		case 1:	
			printf("Escribe el elemento a encolar\n");
			scanf("%s",&elemento);
			push(&cola,elemento);
			//imprimir(cola);
			break;
		case 2:
			if (cola_vacia(cola)){ 
				printf("Cola Vacia\n");
				break;
			}
			pop(&cola);
			//imprimir(cola);
			break;
		case 3:
			
			return 0;
		default:
			printf("Error\n\n");
			break;
	}
	imprimir(cola);
	}
}





