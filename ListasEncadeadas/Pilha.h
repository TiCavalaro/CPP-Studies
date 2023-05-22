/* 
 * File:   Pilha.h
 * Author: byteapath
 *
 * Created on 7 de Outubro de 2014, 17:49
 */

#ifndef PILHA_H
#define	PILHA_H

class Pilha {
public:
    
    struct nodo{
	int elem;
	struct nodo *prox;//O próximo elemento a ser chamado tem que ser do tipo nodo, no caso *prox armazena recebe o endereco de proximo nodo
    } *topo, *aux;
    
    Pilha();
    Pilha(const Pilha& orig);
    virtual ~Pilha();

    bool vazio(struct nodo *campo);
    void insere(void);
    void removr(void);
    void listar(void);
    void menu(void);

    
private:

};

#endif	/* PILHA_H */

