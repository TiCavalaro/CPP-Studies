/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ArvoreBinaria.cpp
 * Author: aluno
 * 
 * Created on 27 de Fevereiro de 2020, 20:23
 */

#include "ArvoreBinaria.h"
#include <cstdlib>
#include "iostream"
#include "No.h"
#include <stddef.h>
using namespace std;


ArvoreBinaria::ArvoreBinaria() {
    this->raiz=NULL;
}

ArvoreBinaria::ArvoreBinaria(const ArvoreBinaria& orig) {
}

ArvoreBinaria::~ArvoreBinaria() {
}

bool ArvoreBinaria::vazio() {
    return this->raiz == NULL;
}

void ArvoreBinaria::insere(int valor){ 
    No *tmp = this->raiz;
    No *ant = NULL;
    
    while (tmp != NULL){
        ant = tmp;
        if (tmp->valor < valor)
            tmp = tmp->direito;
        else
            tmp = tmp->esquerdo;
    }
   if (this->vazio()){
        this->raiz=new No(valor);
    }else 
        if(ant->valor < valor){
            ant->direito =new No(valor);
        }else{
            ant->esquerdo =new No(valor);
        }
}

void ArvoreBinaria::emOrdem(No *inicio) {
    if (inicio != NULL) {
        this->emOrdem(inicio->esquerdo);   
        cout << inicio->valor << " ";
        this->emOrdem(inicio->direito);
    }
}

void ArvoreBinaria::PosOrdem(No* inicio){
     if (inicio != NULL) {
        this->PosOrdem (inicio->esquerdo);   
        this->PosOrdem (inicio->direito);
        cout << inicio->valor << " ";
    }
}
void ArvoreBinaria::PreOrdem(No* inicio){
     if (inicio != NULL) {
        cout << inicio->valor << " ";
        this->PreOrdem (inicio->esquerdo);   
        this->PreOrdem (inicio->direito);
        
    }
}


