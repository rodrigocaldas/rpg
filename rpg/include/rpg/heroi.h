#ifndef RPG_HEROI_H
#define RPG_HEROI_H

#include <rpg/entidade.h>

typedef struct {
    Pocao* pocao;
    Pocao* proximaPocao;
} Cinto;

typedef struct{
    Arma* arma;
    Arma* proximaArma;
} Mochila;

typedef struct Heroi {
    Entidade* entidade;
    unsigned int defesa;
    Cinto* cinto;
    Mochila* mochila;
    void (*Init)(struct Inimigo*, const char*, unsigned int, int);
} Inimigo;

Heroi* Heroi_New();

#endif

