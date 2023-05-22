/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: aluno
 *
 * Created on 27 de Fevereiro de 2020, 20:13
 */

#include <cstdlib>

#include "ArvoreBinaria.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
  
    ArvoreBinaria *obj1 = new ArvoreBinaria();
   
    obj1->insere(1);
    obj1->insere(6);
    obj1->insere(2);
    obj1->insere(5);
    obj1->insere(3);
    obj1->insere(4);
    //obj1->emOrdem(obj1->raiz);
    obj1->PreOrdem(obj1->raiz);
    //obj1->PosOrdem(obj1->raiz);

    return 0;
}

