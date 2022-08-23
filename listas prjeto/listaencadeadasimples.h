#ifndef __LISTAENCADEADA__
#define __LISTAENCADEADA__

#include "structs.h"
#include "listas.h"



template<typename T>
void inicializa(listaJ<T> &l) {
	l = NULL;
}

template<typename T>
void inserir_inicio( listaJ<T> &l, T dado) {
	
	jogadores<T>* novo = new jogadores<T>;
	novo->dado = dado;
	novo->prox = l.inicio;
	l.inicio = novo;
	 

}

template<typename T>
void inserir_final( listaJ<T> &l, T dado) {
	
	jogadores<T> *novo = new jogadores<T>;
	novo->dado = dado;
	jogadores<T> * nav = l.inicio;
	while (nav->prox != NULL) {
		nav = nav->prox;
	}
	nav->prox = novo;
	novo->prox = NULL;
}

template<typename T>
void inserir_posicao(listaJ<T>& l, T dado, T posicao) {
	
	
	jogadores<T> *novo = new jogadores<T>;
	novo->dado = dado;
	jogadores<T> *nav = l.inicio;
	int i = 0;
	while (nav->prox !=NULL && i < posicao -1) {
		nav = nav->prox;
		i++;
	}
	novo->prox = nav->prox;
	nav->prox = novo;
}

template<typename T>
void remover_inicio(listaJ<T> &l) {
	
	jogadores<T> *nav = l.inicio;
	l = nav->prox;
	delete nav;
}

template<typename T>
void remover_fim(listaJ<T> &l) {

	jogadores<T> *nav = l.inicio;
	while (nav->prox->prox != NULL) {
		nav = nav->prox;
	}

	delete nav->prox;
	
}

template<typename T>
void remover_posicao(listaJ<T>& l, T dado, T posicao) {

	jogadores<T>* nav = l.inicio;
	
	int i = 0;
	while (nav->prox != NULL && i < posicao - 1) {
		nav = nav->prox;
		i++;
	}
	jogadores<T>* aux = nav->prox;
	nav->prox = aux->prox;
	delete aux;
}

template<typename T>
void imprimir(listaJ<T> l) {

	for (jogadores<T>* nav = l.inicio; nav != NULL; nav = nav->prox) {
		cout << nav->jogador << " " << nav << " " << nav->prox << endl;
	}

}




#endif 
