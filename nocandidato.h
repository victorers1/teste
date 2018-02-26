#include "nocandidato.h"

#ifndef NOCANDIDATO_H
#define NOCANDIDATO_H

class NoCandidato{
public:
    Candidato *conteudo;
    NoCandidato *next;

    NoCandidato(Candidato *c, NoCandidato *prox){
        this->conteudo = c;
        this->next = prox;
    }

    string toString(){
        return this->conteudo->toString;//criar while para converter todos da lista até o último (NULL)
    }
};

#endif // NOCANDIDATO_H
