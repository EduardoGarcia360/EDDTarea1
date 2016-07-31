#include<ListaEnlazada.h>
#include<stdio.h>
#include<stdlib.h>


void agregar(char* cadena, LISTA* lista){
    NODO* nuevo = (NODO*)malloc(sizeof(NODO));
    nuevo ->datos = cadena;
    if(lista->primero==NULL){
        lista->primero=nuevo;
    }else{
        NODO* actual = lista->primero;
        while(actual->siguiente != NULL){
            actual=actual->siguiente;
        }
        actual->siguiente=nuevo;
    }
}

void mostrar(LISTA* lista){
    NODO* actual = lista->primero;
    //cosas nuevas
    char* linea;
    while(actual!=NULL){
        linea = actual->datos;
        printf("[%s]->\n",linea);
        actual=actual->siguiente;
    }
}
