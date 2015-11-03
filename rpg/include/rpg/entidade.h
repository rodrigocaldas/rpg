#ifndef RPG_ENTIDADE_H
#define RPG_ENTIDADE_H

typedef struct Entidade {
    const char* nome;
    unsigned int ataque;
    int pv;
    void (*Init)(struct Entidade*, const char*, unsigned int, int);
} Entidade;

Entidade* Entidade_New();

#endif
