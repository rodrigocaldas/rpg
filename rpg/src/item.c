#include <rpg/item.h>
#include <stdlib.h>

void Item_Init(Item* self, const char* nome, unsigned int peso, TipoItem tipo) {
    self->nome = nome;
    self->peso = peso;
    self->tipo = tipo;
}

Item* Item_New() {
	Item* item = (Item*) malloc(sizeof(Item));
    item->Init = Item_Init;
	return item;
}
