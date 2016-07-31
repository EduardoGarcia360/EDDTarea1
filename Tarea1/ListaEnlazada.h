#ifndef LISTAENLAZADA
#define LISTAENLAZADA

typedef struct{
    struct nodo* siguiente;
    char* datos;
} NODO;

typedef struct{
    struct nodo* primero;
} LISTA;
#endif // LISTAENLAZADA
