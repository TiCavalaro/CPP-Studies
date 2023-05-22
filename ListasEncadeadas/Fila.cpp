/* 
 * File:   Fila.cpp
 * Author: byteapath
 * 
 * Created on 7 de Outubro de 2014, 17:48
 */

#include "Fila.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Fila::Fila() {
}

Fila::Fila(const Fila& orig) {
}

Fila::~Fila() {
}


bool Fila::vazio(struct nodo *campo){
	if(campo == NULL)
		return true;
	else
		return false;
}

void Fila::insere(void){
	elemento x;
	cout<<"Digite o elemento a inserir: ";
	cin>>x;
	this->aux=(struct nodo *) malloc(sizeof(this->aux));

	this->aux->elem=x;
	this->aux->prox=NULL;
        
    	if (this->inicio == 0)
            this->inicio = aux;
    	else
            this->fim->prox=this->aux; //temos que armazenar este (aux criado) no ponteiro, 
            //para continuar a linkagem Armazena o valor do último elemento armazenado
            //this->fim=this->aux;//aux que entrou agora tem então que ser armazenado como o último...
        this->fim=this->aux;
        
        this->qtde_elementos++;
        
            		 cout<<&this->inicio<<endl;
	    	         cout<<this->inicio<<endl;
	    	    	 cout<<&fim<<endl;
	    	    	 cout<<this->fim<<endl;
	    	    	 

	cout<<this->aux->elem<<"Inserido com sucesso!\n\n";
}

void Fila::removr(void){
	if (vazio(this->inicio)){
		cout<<"Fila vazia!\n";
	}else{
		this->aux=this->inicio; // Obter o valor inicial, para remove-lo
		this->inicio=this->inicio->prox;//receber o próximo elemento a ser o inicio
                cout<<this->aux->elem;
		free(this->aux);//remover o item que havia recebido o valor inicial
		cout<<"Removido com sucesso!\n";
   	}
}

void Fila::listar(void){
	 if (!vazio(this->inicio)){
        //Se for vazio não mostra de acordo com a função vazio, desta forma é 
        //necessário mostrar o valor que esta apontando para vazio (NULL), no caso o ultimo, "final;"                 
                for (this->aux=this->inicio;!vazio(this->aux->prox);this->aux=this->aux->prox){
		   cout<<this->aux->elem<<"\n";
		   //printf("%d\n",inicio);
		   //cout<<this->aux->prox;
                }	   
	        cout<<this->aux->elem<<"\n\n";
		//printf("%d\n",aux->prox);
	/*
	    nodo *p;
	    p = this->inicio;
        while (!vazio(p->prox)){
           cout<<p->elem;
           p = p->prox;
        }
        cout<<p->elem;*/

        } 
        else 
        cout<<"Fila Vazia!\n";
}

void Fila::menu(void){

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
                            case '1': insere(); break;
                            case '2': removr(); break;
                            case '3': listar(); break;
                            case '4': sair=1; break;
                            case '5': bubbleSort(); break;
                default:{
                        cout<<"Opçao invalida! \n";
                                        break;
                }
            }
        }
        
}      

Fila Fila::retornaObj(){
    
    Fila obj2;
    obj2.qtde_elementos=3;
    return obj2;

}

void Fila::maiormenor(){

    int maior=0, menor=0, cont=0;
    maior = this->inicio->elem;
    menor = this->inicio->elem;
    for(this->aux=this->inicio;cont<this->qtde_elementos;this->aux=this->aux->prox){
        if(aux->elem>maior)
            maior=aux->elem;
        if(aux->elem<menor)
            menor=aux->elem;
       cont++; 
    }
    cout<<"Quantidade de Elementos"<< this->qtde_elementos << endl;
    cout<<"Maior :"<<maior<<endl<< "Menor :"<<menor << endl;

}

void Fila::bubbleSort(){
     int cont=0;
     int conttotal=0;
     nodo *aux2, *aux3;
     //int repeticao = (this->qtde_elementos)/2;
     aux3 = this->inicio->prox;
     while(aux3->prox!=NULL){
        for(this->aux = this->inicio; this->aux->prox!=NULL; this->aux=this->aux->prox ) {
                aux2=this->aux->prox;
                  if(aux->elem  > aux2->elem){
                      int bck = this->aux->elem;
                      this->aux->elem=aux2->elem;
                      aux2->elem=bck;
                  }
        }
     aux3=aux3->prox;                
     }   
    
}

void Fila::teste(){
    int c=0;
    for( int i = this->qtde_elementos - 1; i >= 0; i-- ) {
        for( int j = 1; j <= i; j++ ) {
            c++;
        }
    }
    cout<<c;
}
