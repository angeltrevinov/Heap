#ifndef HEAP_H_INCLUDED
#define HEAP_H_INCLUDED
///Arbol heap implementado como arreglo
#include <iostream>

using namespace std;

class Heap{
private:
    int capacidad; //capacidad máximo del heap
    int *arr; //pointer a un arreglo de enteros donde
    int heapTam; // va tomando el tamaño actual del heap
public:
    Heap(int capacidad){
        this->capacidad = capacidad;
        arr=new int[capacidad];
        heapTam=0;
    }
    
    ///método que regresa el padre de un nodo
    
}
///método para regresar el hijo izquierdo de un nodo


///método para regresar el hijo derecho de un nodo


///Método para insertar un valor

///Método para imprimir el Heap


};



#endif // HEAP_H_INCLUDED
