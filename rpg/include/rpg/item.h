#ifndef RPG_ITEM_H
#define RPG_ITEM_H

typedef enum {
	ARMA,
	POCAO
} TipoItem;

typedef struct Item {
	const char* nome;
	unsigned int peso;
	TipoItem tipo;
    void (*Init)(struct Item*, const char*, unsigned int, TipoItem);
} Item;

Item* Item_New();

#endif
