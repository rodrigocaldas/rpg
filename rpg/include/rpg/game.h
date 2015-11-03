#ifndef RPG_GAME_H
#define RPG_GAME_H

#include <rpg/types.h>

typedef struct {
	unsigned int niveis;
	unsigned int dimensoesMatriz[2];
} GameData;

GameData* GameData_New(unsigned int, unsigned int*);

#endif
