#include "unidade.h"

float dano_real(float atk, float def, int tipo_atacker, int tipo_defender){
	float result;
	if((tipo_atacker == 1 && tipo_defender == 2)||(tipo_atacker == 2 && tipo_defender == 3)||(tipo_atacker == 3 && (tipo_defender > 3 || tipo_defender == 2))) result = (2*atk)/def;
	else result = atk/def;
	if(result < 0,1) return 0;
	else return result;
}

void move(char direcao,int *x, int *y, float velocidade){
	if(direcao == 'w'||'W') *y = *y - velocidade;
	if(direcao == 's'||'S') *y = *y + velocidade;
	if(direcao == 'a'||'A' ) *x = *x - velocidade;
	if(direcao == 'd'||'D') *x = *x + velocidade;
}

void mine(int *resource, float *vida_mina, float atk){
	if((*vida_mina - atk) >= 0.0){
		*vida_mina = *vida_mina - atk;
		*resource = *resource + (int)atk;
	} 
}

int verifica_gera(int gold_cost, int food_cost ,int *gold, int *food){
	if((*gold >= gold_cost)&&(*food >= food_cost)){
		*gold = *gold - gold_cost;
		*food = *food - food_cost;
		return 1;
	}
	else if(*gold < gold_cost && *food < food_cost) return 4;
	else if(*gold < gold_cost) return 2;
	else if(*food < food_cost) return 3;
}

void come(int *food, Unidade uni){
	*food = *food - uni.consome;
}