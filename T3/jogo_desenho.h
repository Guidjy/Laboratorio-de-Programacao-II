// Funções auxiliares do T3 de LabII

#ifndef _JOGO_DESENHO_H
#define _JOGO_DESENHO_H

#include "abb.h"

// desenha a árvore
void desenha_arvore(arv self, int largura);

// desenha o tempo de duração do jogo
void desenha_duracao(double tempo);

// imprime a palavra a ser inserida
void desenha_palavra_a_inserir(char *palavra, double tempo);

// desenha a borda inferior da tela e a palavra sendo digitada pelo jogador
void desenha_borda(char *entrada, int pontuacao);

// desenha a tela de fim de jogo
void desenha_fim_de_jogo(int pontuacao, double duracao);

#endif
