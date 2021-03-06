#include <stdio.h>
#include <stdlib.h>

typedef struct unidades{
	int tipo, x ,y, velocidade, food_cost, gold_cost, consome;
	float atk, res, vida, range;
	struct unidades *prox, *ant;
}Unidade;

/*Unidade melee{
	atk = 32;
	velocidade = 2;
	res = 3;
	vida = 120;
	range = 1;
};

Unidade mage{
	atk = 60;
	velocidade = 2;
	res = 2;
	vida = 80;
	range = 5;
};

Unidade catapulta{
	atk = 80;
	velocidade = 1;
	res = 3;
	vida = 200;
	range = 7;
};

Unidade farm{
	atk = 0;
	velocidade = 0;
	res = 3;
	vida = 300;
	range = 0;
};

Unidade fountain{
	atk = 0;
	velocidade = 0;
	res = 5;
	vida = 1000;
	range = 0;
};

Unidade mage_court{
	atk = 0;
	velocidade = 0;
	res = 3;
	vida = 350;
	range = 0;
};

Unidade caec{
	atk = 0;
	velocidade = 0;
	res = 5;
	vida = 350;
	range = 0;
};*/

/*Calcula o dano real, recebendo a variavel de ataque da unidade atacante e a 
defesa da unidade sendo atacada. Retorna um float*/
float dano_real(float atk, float def, int tipo_atacker, int tipo_defender);

/*Funcao de movimentacao. Recebe posicao X Y da unidade e sua velocidade. Os valores de X e Y serao atualizados por ponteiro*/
void move(char direcao, Unidade *uni);

/*Funcao de minning de resource. Recebe o resource do jogador como ponteiro, a vida da mina e o ataque da unidade, que
eh a taxa de mineracao*/
void mine(int *resource, float *vida_mina, float atk);

/*Funcao que verifica o gold e a food para a geracao de unidade. Se a unidade puder ser gerada, retorna 1, caso contrario 0.*/
int gera(int *gold, int *food);

void come(int *food, Unidade uni);

char move_calc(Unidade uni, int x, int y);


