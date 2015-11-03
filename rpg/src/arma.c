#include <rpg/arma.h>
#include <stdlib.h>

void Arma_Init(Arma* self, const char* nome, unsigned int peso, unsigned int ataque) {
    self->item->Init(self->item, nome, peso, ARMA);
    self->ataque = ataque;
}

Arma* Arma_New() {
    Arma* arma = (Arma*) malloc(sizeof(Arma));
    arma->item = Item_New();
    arma->Init = Arma_Init;
    return arma;
}

