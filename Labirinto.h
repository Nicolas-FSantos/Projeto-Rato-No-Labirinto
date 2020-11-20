#include <iostream>
#include <time.h>
using namespace std;

#ifndef Labirinto_h
#define Labirinto_h

const char ESPACO = '*';
const char PAREDE = 'P';
const char QUEIJO = 'Q';
const char ENTRADA = 'E';
const char RATO = 'R';
const char VOLTANDO = 'V';

const int DIREITA = 0;
const int BAIXO = 1;
const int ESQUERDA = 2;
const int CIMA = 3;
const int INICIO = 4;

const int LARGURA = 5;
const int ALTURA  = 5;

void ConstruindoMapa(char mapa[5][5], int &posX, int &posY) {
    
    srand(time(NULL));
     
    posX=rand()%5;
    posY=rand()%5;
    
    for (int i = 0; i <LARGURA; i++){
        for (int j = 0; j < ALTURA; j++){
            mapa[i][j] = ESPACO;
        }
    }


  
    mapa[1][0] = PAREDE;
    mapa[3][4] = PAREDE;
    mapa[2][2] = PAREDE;
    mapa[4][1] = PAREDE;
    mapa[3][3] = QUEIJO;
    
    mapa[posX][posY] = ENTRADA;
    
}

void exibirMapa (char mapa[LARGURA][ALTURA])
{
    for (int i=0; i<LARGURA; i++)
    {
        for (int j=0; j<ALTURA; j++)
        {
            cout << mapa[i][j] << "\t";
        }
        cout << endl;
    }

}

#endif