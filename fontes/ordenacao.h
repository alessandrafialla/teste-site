
#ifndef ORDENACAO_H
#define ORDENACAO_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Definições de tamanho
#define TAM 1024
#define TAMTESTE 1000

// Prototipação de funções
int aleat(int min, int max);

/*Imprime as primeiras 5 e ultimas 6 posicoes do vetor*/
void imprimeVetor(int *v, int n);

/*Inicializa vetor com valores aleatorios de 0 ate 2048*/
void inicializaVetor(int *v);

/*Copia todos os valores de vet1 para vet2*/
void copiaVetor(int *vet1, int *vet2);

/*Imprime as opcoes de acoes*/
void menuPrincipal();

/*Implementa os algoritmos de busca*/
int buscaSequencial(int vetor[], int valor, long *comp);
int pesquisaBinaria(int vetor[], int chave, long *comp);

/*Variacao de implementacao do quicksort utilizando pivo no inicio do vetor*/
void particionarInicio(int *v, int esq, int dir, int *pos_pivo, long *comp, long *trocas);
void quickSortPivoInicio(int *v, int esq, int dir, long *comp, long *troca);

/*Variacao de implementacao do quicksort utilizando pivo no final do vetor*/
void particionarFim(int *v, int esq, int dir, int *pos_pivo, long *comp, long *trocas);
void quickSortPivoFim(int *v, int esq, int dir, long *comp, long *trocas);

/*Implementa o algoritmo Insertion Sort*/
void insertionSort(int *v, int n, long *comp, long *troca);

/*Variacao do Shell sort com gap em potencia de 2*/
void shellSortPot2(int *v, int n, long *comp, long *troca);

/*Variacao do Shell sort com gap em sequencia de Knuth*/
void shellSort(int *v, int n, long *comp, long *troca);

float calculaMedia(long *v, int n);
float calculaDesvioPadrao(long *v, int n, float media);

#endif // ORDENACAO_H
