#include <stdio.h>
#include <stdlib.h>
#include <ListaEnlazada.h>




int main()
{
    LISTA* lista = (LISTA*)malloc(sizeof(LISTA));
    agregar("hola",lista);
    agregar("mundo",lista);
    agregar("jaja",lista);
    agregar("xD",lista);
    agregar("cel",lista);
    agregar("loli",lista);
    mostrar(lista);
    //eliminar("pachon",lista);
    modificar("loli","pachon",lista);
    mostrar(lista);
    return 0;
}
