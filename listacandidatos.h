#ifndef LISTACANDIDATOS_H
#define LISTACANDIDATOS_H

class ListaCandidatos{
public:
    NoCandidato *head;

    void adicionar();
    void remover();
    void filtrar();
    void tamanho();

    bool estaVazia(){
        return head == NULL;
    }
};


#endif // LISTACANDIDATOS_H
