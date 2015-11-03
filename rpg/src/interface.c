#include <rpg/interface.h>
#include <rpg/types.h>
#include <rpg/game.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>	

GameData* Interface_GetData(){
	unsigned int niveis, dimensoesMatriz[2];
	bool_t matrizAleatoria;
	printf("Qual a quantidade de niveis do jogo?\n");
	scanf("%u", &niveis);
	printf("Voce deseja definir as dimensoes da matriz? (0 para sim, 1 para nao)\n");
	scanf("%c", &matrizAleatoria);
	if (!matrizAleatoria){
		printf("Digite as dimensoes da matriz (NxM)");
		scanf("%u%*c%u", &dimensoesMatriz[0], &dimensoesMatriz[1]);
	} else {
		srand(time(NULL));
		dimensoesMatriz[0] = (rand() % 6) + 5;
		dimensoesMatriz[1] = (rand() % 6) + 5;
	}

	return GameData_New(niveis, dimensoesMatriz);	
}
