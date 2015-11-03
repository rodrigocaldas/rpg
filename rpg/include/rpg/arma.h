#ifndef RPG_ARMA_H
#define RPG_ARMA_H

#include <rpg/item.h>

typedef struct Arma {
    Item* item;
    unsigned int ataque;
    void (*Init)(struct Arma*, const char*, unsigned int, unsigned int);
} Arma;

Arma* Arma_New();

#endif
