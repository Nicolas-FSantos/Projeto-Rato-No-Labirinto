#include <iostream>
#include "Labirinto.h"
#include <time.h>

using namespace std;



int main (){

    char mapa[5][5];
    int posicaoXEntradaRato,posicaoYEntradaRato;

    ConstruindoMapa(mapa,posicaoXEntradaRato,posicaoYEntradaRato);
    exibirMapa (mapa);

}