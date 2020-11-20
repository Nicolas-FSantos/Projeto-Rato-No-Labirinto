#include <iostream>

using namespace std;

const char ESPACO = '*';
const char PAREDE = 'P';
const char QUEIJO = 'Q';
const char ENTRADA = 'E';
const char RATO = 'R';
const char VOLTANDO = 'V';

const int LARGURA = 5;
const int ALTURA  = 5;

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

int main (){

    char mapa [LARGURA][ALTURA];

    for (int i = 0; i <LARGURA; i++){
        for (int j = 0; j < ALTURA; j++){
            mapa[i][j] = ESPACO;
        }
    }


    mapa[0][0] = ENTRADA;
    mapa[0][4] = PAREDE;
    mapa[1][1] = PAREDE;
    mapa[1][4] = PAREDE;
    mapa[2][3] = PAREDE;
    mapa[3][3] = QUEIJO;

    exibirMapa (mapa);

}