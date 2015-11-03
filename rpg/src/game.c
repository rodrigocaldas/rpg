#include <rpg/game.h>
#include <stdlib.h>

GameData* GameData_New(unsigned int niveis, unsigned int* dimensoesMatriz) {
	GameData* gameData = (GameData*) malloc(sizeof(GameData));
	gameData->niveis = niveis;	
	gameData->dimensoesMatriz[0] = dimensoesMatriz[0];
	gameData->dimensoesMatriz[1] = dimensoesMatriz[1];

	return gameData;
}
