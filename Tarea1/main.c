#include <stdio.h>
#include <stdlib.h>
#include <ListaEnlazada.h>




int main()
{
    LISTA* lista = (LISTA*)malloc(sizeof(LISTA));
    agregar("martha",lista);
    agregar("amigos",lista);
    mostrar(lista);
    return 0;
}
