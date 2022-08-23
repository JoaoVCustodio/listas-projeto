#ifndef lista_h
#define lista_h
#include "structs.h"
#include <iostream>

using namespace std;

template<typename T>
struct Elemento {
	T dado;
};

template<typename T, int MAX>
struct Lista {
	Elemento<T> elementos[MAX];
	int tamanho;
};

template<typename T, int MAX>
void inicializar(Lista<T, MAX>& lista) {
	lista.tamanho = 0;
}

template<typename T, int MAX>
void inserir_no_final(Lista<T, MAX>& lista, T dado) {
	lista.elementos[lista.tamanho].dado = dado;
	lista.tamanho++;
}

template<typename T, int MAX>
void inserir_na_posicao(Lista<T, MAX>& lista, T dado, int pos) {
	for (int i = lista.tamanho; i > pos; i--) {
		lista.elementos[i].dado = lista.elementos[i - 1].dado;
	}
	lista.elementos[pos].dado = dado;
	lista.tamanho++;
}

template<typename T, int MAX>
void inserir_no_inicio(Lista<T, MAX>& lista, T dado){
	inserir_na_posicao(lista, dado, 0);
}

template<typename T, int MAX>
void remover_do_final(Lista<T, MAX>& lista) {
	lista.tamanho--;
}

template<typename T, int MAX>
void remover_da_posicao(Lista<T, MAX>& lista, int pos) {
	for (int i = pos; i < lista.tamanho; i++) {
		lista.elementos[i].dado = lista.elementos[i + 1].dado;
	}
	lista.tamanho--;
}

template<typename T, int MAX>
void remover_do_inicio(Lista<T, MAX>& lista) {
	for (int i = 0; i < lista.tamanho; i++) {
		lista.elementos[i].dado = lista.elementos[i + 1].dado;
	}
	lista.tamanho--;
}

template<typename T, int MAX>
T obter(Lista<T, MAX>& lista, int pos) {
	return lista.elementos[pos].dado;
}

template<typename T, int MAX>
bool contem(Lista<T, MAX>& lista, T dado) {
	for (int i = 0; i < lista.tamanho; i++) {
		if (lista.elementos[i].dado == dado) {
			return true;
		}
	}
	return false;
}

template<typename T, int MAX>
T obter_posicao(Lista<T, MAX>& lista, T dado) {
	for (int i = 0; i < lista.tamanho; i++) {
		if (lista.elementos[i].dado == dado) {
			return i;
		}
	}
	return -1;
}

template<typename T, int MAX>
void imprimir(Lista<T, MAX>& lista) {
	for (int i = 0; i < lista.tamanho; i++) {
		cout << " " << lista.elementos[i].dado << endl;
	}
}

#endif


