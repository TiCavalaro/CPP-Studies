/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Duplamente.cpp
 * Author: byteapath
 * 
 * Created on 19 de Novembro de 2019, 15:54
 */

#include "Duplamente.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Duplamente::Duplamente() {
}

Duplamente::Duplamente(const Duplamente& orig) {
}

Duplamente::~Duplamente() {
}

void Duplamente::inserir(){

        int x;
        cin>>x;
	this->aux=(struct nodo *) malloc(sizeof(this->aux));
	this->aux->elem=x;
        
        if(this->inicio == 0){
            this->aux->ant=NULL;
            this->aux->prox=NULL;
            this->inicio = aux;
        }   
        else{
            this->aux->prox=NULL;
            //this->aux->prox=this->inicio; Circular
            this->aux->ant=fim;
            this->fim->prox=this->aux;
          }
          this->fim=this->aux;
}

void Duplamente::menu(void){

    char op;
            int sair=0;
            this->inicio=this->fim=NULL;
            for (;sair==0;){
                    //system("cls");
                    cout<<"1 -> Insere na fila\n2 -> Remove da fila\n";
                    cout<<"3 -> Listar fila\n4 -> Sair da fila\n";
                    cout<<"5 - BubleSort";
                    cout<<" Digite uma opçao: ";
                    cin>>op;
                    switch (op){
                            case '1': inserir(); break;
                            //case '2': removr(); break;
                            case '3': listar(); break;
                            //case '4': sair=1; break;
                            //case '5': bubbleSort(); break;
                default:{
                        cout<<"Opçao invalida! \n";
                                        break;
                }
            }
        }
        
}      


void Duplamente::listar(){
                for (this->aux=this->inicio;this->aux->prox!=NULL;this->aux=this->aux->prox){
		   cout<<this->aux->elem<<"\n";
                }	   
	        cout<<this->aux->elem<<"\n";
                
                for (this->aux=this->fim;this->aux->ant!=NULL;this->aux=this->aux->ant){
		   cout<<this->aux->elem<<"\n";
                }	   
	        cout<<this->aux->elem<<"\n";
              
}
