 /* 
 * File:   main.cpp
 * Author: aluno
 *
 * Created on 7 de Maio de 2015, 19:05
 */

#include <cstdlib>
#include "ArvoreBinaria.h"
#include "iostream"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int valor, quanty = 0;
    ArvoreBinaria *arvore = new ArvoreBinaria();
    cout<<"Digite a qtde de valores a serem adicionados na arvore"<<endl;
    cin>>quanty;
    cout<<"Digite os valores"<<endl;
    for(int i = 0; i < quanty; i++) {
        cin>>valor;
        arvore->insere(valor);
    }
    arvore->listar(arvore->raiz);
 
    return 0;
}

