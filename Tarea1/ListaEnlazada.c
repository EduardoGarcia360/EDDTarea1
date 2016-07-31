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

void eliminar(char* cadena, LISTA* lista){
    if(lista->primero == NULL){ //si la lista no tiene nada
        printf("lista vacia.\n");
    }else{// si la lista tiene al menos un nodo

        NODO* aux = lista->primero;
        if(aux->datos == cadena){ //verificamos si es el primero
            free(lista->primero);
            lista->primero = NULL;
        }else{
            NODO* temporal = aux->siguiente;
            while(temporal != NULL && temporal->datos != cadena){
                aux = aux->siguiente;
                temporal = temporal->siguiente;
            }
            if(temporal->datos == NULL){
                printf("el dato no existe en esta lista.\n");
            }else{
                aux->siguiente = temporal->siguiente;
                free(temporal);
            }
        }

    }
}
