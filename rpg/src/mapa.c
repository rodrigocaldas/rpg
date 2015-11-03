#include <rpg/mapa.h>
#include <stdlib.h>

Celula* Celula_New(TipoCelula tipo) {
	Celula* celula = (Celula*) malloc(sizeof(Celula));
	celula->tipo = tipo;
	switch (tipo) {
		case ITEM:
			celula->conteudo.item = Item_New();
			break;
		case INIMIGO:
			celula->conteudo.inimigo = Inimigo_New();
			break;
	}
	
	return celula;
}
