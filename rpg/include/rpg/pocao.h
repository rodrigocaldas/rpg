#ifndef RPG_POCAO_H
#define RPG_POCAO_H

#include <rpg/item.h>

typedef struct Pocao {
    Item* item;
    unsigned int curarPv;
    unsigned int aumentarAtaque;
    unsigned int aumentarDefesa;
    void (*Init)(struct Pocao*, const char*, unsigned int,
                 unsigned int, unsigned int, unsigned int);
} Pocao;

Pocao* Pocao_New();

#endif
