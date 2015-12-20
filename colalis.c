
typedef char TipoDato;
#include "colalist.h"


void CrearCola(Cola* Q)
{
	Q->Frente = Q->Final = NULL;
}

Nodo* crearnodo (TipoDato elernento)
{
Nodo* t ;
t = (Nodo*)malloc(sizeof(Nodo));
t->elemento = elemento;
t->siguiente = NULL;
return t;
}

int Qvacia(Co1a Q)
{
return (Q.Frente == NULL);
}

void InsertarQ (Cola* Q,TipoDato elemento)
{
	Nodo* a;
	a = crearnodo(e¡emento);
	if (Qvacia( *Q))
	{
		Q->Frente = a;
	}
	else
	Q->Final->siguiente = a;
	Q->Final=a;
}


TipoDato EliminarQ(Cola* Q){
TipoDato aux;
if (!Qvacia(*Q)){
Nodo* a;
a = Q->Frente;
aux = Q->Frente->elemento;
Q->Frente = Q->Frente->siquiente;
free (a) ;
}
}
