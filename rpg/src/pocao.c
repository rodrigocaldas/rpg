#include <rpg/pocao.h>
#include <stdlib.h>

void Pocao_Init(Pocao* self, const char* nome, unsigned int peso, unsigned int curarPv,
                unsigned int aumentarAtaque, unsigned int aumentarDefesa) {
    self->item->Init(self->item, nome, peso, POCAO);
    self->curarPv = curarPv;
    self->aumentarAtaque = aumentarAtaque;
    self->aumentarDefesa = aumentarDefesa;
}

Pocao* Pocao_New() {
    Pocao* pocao = (Pocao*) malloc(sizeof(Pocao));
    pocao->item = Item_New();
    pocao->Init = Pocao_Init;
    return pocao;
}

