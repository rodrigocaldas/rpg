#ifndef RPG_INIMIGO_H
#define RPG_INIMIGO_H

#include <rpg/entidade.h>

typedef enum {
	MARINHO,
	TERRESTRE,
	ALADO
} TipoInimigo;

typedef struct Inimigo {
    Entidade* entidade;	
    TipoInimigo tipo;
    void (*Init)(struct Inimigo*, const char*, unsigned int, int, TipoInimigo);
} Inimigo;

Inimigo* Inimigo_New();

#endif
