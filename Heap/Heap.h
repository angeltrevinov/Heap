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
    
    ///método que regresa el indice del padre de un nodo
    int Padre(int k){ // recibe el hijo
            return k/2; //si no es raiz
    }
    
    ///método para regresar el indice del hijo izquierdo de un nodo
    int HijoIzq(int k){//recibe un padre
        if(k*2 <= capacidad){
            return k*2; //si tiene hijo izquierdo
        }else{
            return -1; //si no tiene hijo izquierdo
        }
    }
    
    ///método para regresar el indice del hijo derecho de un nodo
    int HijoDer(int k){// recibe padre
        if(k*2+1 <= capacidad){
            return k*2+1;
        }else{
            return -1;
        }
    }
    
    ///Método para insertar un valor
    void Insertar(int Valor){
        int Temp;
        heapTam++;
        arr[heapTam] = Valor;
        if(arr[Padre(heapTam)] > arr[heapTam]){
            Temp = arr[Padre(heapTam)];
            arr[Padre(heapTam)] = arr[heapTam];
            arr[heapTam] = Temp;
        }
    }
    
    ///Método para imprimir el Heap
    void Imprimir(){
        for(int i = 1; i<= capacidad; i++){
            cout << arr[i] << " " ;
        }
    }
    
};

#endif // HEAP_H_INCLUDED
