#include <stdio.h>
#include <stdlib.h>
struct nodo
{
TipoDato elemento;
struct nodo* siguiente;
};

typedef struct nodo Nodo;

typedef struct
{
Nodo* Frente;
Nodo* Final;
}Cola;



// * Los prototipos de las operaciones * /

void CrearCola(Cola* Q); // * Tnicializa la cola como vacía */
void InsertarQ(Cola* Q,Tipo»dto elemento);
TipoDato EliminarQ(Cola* Q);
void BorrarCola(Cola* Q);
// * acceso a la cola * /
TipoDato FrenteQ(Co1a Q);
/* métodos de verificación del estado de la cola */
int Qvacia(Co1a Q);
