/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Duplamente.h
 * Author: byteapath
 *
 * Created on 19 de Novembro de 2019, 15:54
 */

#ifndef DUPLAMENTE_H
#define DUPLAMENTE_H

class Duplamente {
public:
    
    struct nodo{
        int elem;
        struct nodo *ant;
        struct nodo *prox;
    }*aux, *fim, *inicio;
    
    Duplamente();
    Duplamente(const Duplamente& orig);
    virtual ~Duplamente();
    void inserir();
    void menu();
    void listar();
private:

};

#endif /* DUPLAMENTE_H */

