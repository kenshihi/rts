#include "combat.h"

int go_minning(Unidade worker, char map){
	int i, j, x, y;
	char direction;
	for(i = worker.y - 1; i < worker.y + 1; i++){
		for(j = worker.x -1; j < worker.x + 1; j++){
			if(map[i][j] == 'g') return 1;
		}
	}
	for(i = (worker.y - 20); i < worker.y + 20; i++){
		for(j = (worker.x - 20); i < worker.x + 20; j++){
			if(map[i][j] == 'g'){
				y = i;
				x = j;
				direction = move_calc(worker, y, x);
				if(direction == NULL) return 0;
				i = worker.y + 21;
				j = worker.x + 21;

			}
		}
	}
	move(direction, worker);
	return 0;
}