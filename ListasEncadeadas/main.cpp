/* 
 * File:   main.cpp
 * Author: byteapath
 *
 * Created on 7 de Outubro de 2014, 17:48
 */

#include <cstdlib>
#include <iostream>
#include "Fila.h"
#include "Pilha.h"
#include "Duplamente.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    Fila *obj1 = new Fila();
    //Fila *obj2 = new Fila();
    obj1->menu();
    //*obj2 = obj1->retornaObj();
    //cout << obj2->qtde_elementos;
    
    //Pilha *obj2 = new Pilha();
    //obj2->menu();
    
    //Duplamente *obj3 = new Duplamente();
    //obj3->menu();
            

    return 0;
}

