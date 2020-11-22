#include <iostream>
#include "Labirinto.h"
#include "Ratatouille.h"
#include <time.h>

using namespace std;



int main (){

    char mapa[5][5];
    char mapa2[5][5];
    bool temQueijo;

    int posicaoXEntradaRato,posicaoYEntradaRato;

    cout << endl << "Situacao 1 - Queijo Liberado" << endl << endl;

    ConstruindoMapa(mapa,posicaoXEntradaRato,posicaoYEntradaRato);

    exibirMapa (mapa);

    temQueijo = procurarQueijo(mapa,posicaoXEntradaRato,posicaoYEntradaRato, INICIO, temQueijo);

    if(temQueijo==false)
    {
        cout <<"Vish...Nao consegui encontrar o raio do queijo"<<endl;
        cout<<"Agora estou com fome '_' "<<endl << endl;
    }   

    cout << endl << "Situacao 2 -  Queijo Bloqueado" << endl << endl;

    ConstruindoMapa2(mapa2,posicaoXEntradaRato,posicaoYEntradaRato);

    exibirMapa (mapa2);

    temQueijo = procurarQueijo(mapa2,posicaoXEntradaRato,posicaoYEntradaRato, INICIO, temQueijo);

    if(temQueijo==false)
    {
        cout <<"Vish...Nao consegui encontrar o raio do queijo"<<endl;
        cout<<"Agora estou com fome '_' "<<endl << endl;

    }
    return 0;
}