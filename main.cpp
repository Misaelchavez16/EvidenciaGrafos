#include <iostream>
#include <cstddef>

using namespace std;

#include <vector>
#include <algorithm>
#include <math.h>
#include "linkedlist.h"
#include "hashTable.h"
#include "grafo.h"


int main(){
    //cout<<"Hello World!"<<endl;

    GrafoMa<int> GrafoDirigido(4);
    GrafoDirigido.addEdge(1, 2, 10);
    GrafoDirigido.addEdgeD(0, 1, 5);
    GrafoDirigido.addEdgeD(0, 3, 40);
    


    GrafoDirigido.imprimeGrafo();

    cout<<"¿Y los Grafos?"<<endl;
}
