/* 
 * File:   Fila.h
 * Author: byteapath
 *
 * Created on 7 de Outubro de 2014, 17:48
 */

#ifndef FILA_H
#define	FILA_H

class Fila {
public:
    
    typedef int elemento;
    
    struct nodo{
        elemento elem;
        struct nodo *prox;
    }*inicio, *fim, *aux;
    
    int qtde_elementos;
    
    
    Fila();
    Fila(const Fila& orig);
    virtual ~Fila();
       
    bool vazio(struct nodo *campo);
    void insere(void);
    void removr(void);
    void listar(void);
    void menu(void);
    void maiormenor();
    float mediaaritmetica();
    void media3e5();
    void bubbleSort();
    Fila retornaObj();
    void teste();


private:

};

#endif	/* FILA_H */

