//
//  main.cpp
//  Heap
//
//  Created by Angel Trevino on 11/3/17.
//  Copyright © 2017 Angel Odiel Treviño Villanueva. All rights reserved.
//

#include "Heap.h"

int main() {
    
    Heap minHeap(8);
    
    minHeap.Insertar(9);
    minHeap.Insertar(3);
    minHeap.Insertar(6);
    minHeap.Insertar(10);
    minHeap.Insertar(2);
    minHeap.Insertar(8);
    minHeap.Insertar(1);
    minHeap.Insertar(4);
    minHeap.Imprimir();
    //insertar 9,3,6,10,2,8,1,4
    //es un minHeap
    
    cout << endl;
    return 0;
}
