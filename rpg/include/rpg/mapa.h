#ifndef RPG_MAPA_H
#define RPG_MAPA_H

#include <rpg/item.h>
#include <rpg/inimigo.h>

typedef union {
	Item* item;
	Inimigo* inimigo;
} CelulaConteudo;

typedef enum {
	ITEM,
	INIMIGO
} TipoCelula;

typedef struct Celula {
	TipoCelula tipo;
	CelulaConteudo conteudo;
} Celula;

typedef struct {
		
} Mapa;

Celula* Celula_New(TipoCelula);

#endif

