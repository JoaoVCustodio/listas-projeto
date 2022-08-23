#ifndef __STRUCTS__
#define __STRUCTS__

#include "listas.h"

#include <iostream>
using namespace std;

 
struct jogador {
	 
	string nome;
	int pontos;
};

template<typename T>
struct jogadores {
	
	T jogador;
	jogadores<T> *prox;
};

template <typename T>
struct listaJ {
	
	jogador* inicio;
};

template<typename T>
void criar_jogadores_ilimitados(jogadores<jogador> *&jogadores ){
	
	
}


template <typename T>
void ranking_completo( jogadores<jogador> *jogadores , int quantidade_jogadores){
	

}


template <typename T>
void ranking_top_10() {


}

template <typename T>
void sortear_nomes(jogadores<jogador>* jogadores) {
	
	
}

template <typename T>
void sortear_pontos(jogadores<jogador>* jogadores) {

}

template <typename T>
void rodadas() {

}

	







#endif 
