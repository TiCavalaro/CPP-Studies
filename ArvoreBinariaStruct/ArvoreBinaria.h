/* 
 * File:   ArvoreBinaria.h
 * Author: aluno
 *
 * Created on 7 de Maio de 2015, 19:07
 */

#ifndef ARVOREBINARIA_H
#define	ARVOREBINARIA_H


class ArvoreBinaria {
public:
    ArvoreBinaria();
    ArvoreBinaria(const ArvoreBinaria& orig);
    virtual ~ArvoreBinaria();
    
    struct No{
        int valor;
        struct No *direito;
        struct No *esquerdo;
    }*raiz;
    
    bool vazio();
    void insere (int valor);
    void listar (No *no);
private:

};

#endif	/* ARVOREBINARIA_H */

