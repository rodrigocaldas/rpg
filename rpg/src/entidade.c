#include <rpg/entidade.h>
#include <stdlib.h>

void Entidade_Init(Entidade* self, const char* nome, unsigned int ataque, int pv) {
    self->nome = nome;
    self->ataque = ataque;
    self->pv = pv;
}

Entidade* Entidade_New() {
    Entidade* entidade = (Entidade*) malloc(sizeof(Entidade));
    entidade->Init = Entidade_Init;
    return entidade;
}
