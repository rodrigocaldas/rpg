#include <rpg/inimigo.h>
#include <stdlib.h>

void Inimigo_Init(Inimigo* self, const char* nome, unsigned int ataque,
                  int pv, TipoInimigo tipo) {
    self->entidade->Init(self->entidade, nome, ataque, pv);
    self->tipo = tipo;
}

Inimigo* Inimigo_New() {
	Inimigo* inimigo = (Inimigo*) malloc(sizeof(Inimigo));
    inimigo->entidade = Entidade_New();
    inimigo->Init = Inimigo_Init;
	return inimigo;
}
