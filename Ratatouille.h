#include <iostream>
#include "Labirinto.h"
using namespace std;

#ifndef Ratatouille_h
#define Ratatouille_h

bool procurarQueijo(char labirinto[LARGURA][ALTURA],int posX,int posY, int deOndeVeio, bool &temQueijo){
    if(posX < 0 || posY < 0 || posX >= LARGURA || posY >= ALTURA){
        return false;
    }else if(labirinto[posX][posY]==QUEIJO){
        cout<<"Achei o Queijo !!!"<<endl<<"Comendo Queijo........."<<endl;
        labirinto[posX][posY]=COMENDO;
        return true;
    }else if(labirinto[posX][posY]==PAREDE || labirinto[posX][posY] == RATO){
        return false;
    }else{
        labirinto[posX][posY]=RATO;
        exibirMapa(labirinto);

        if(deOndeVeio != DIREITA and procurarQueijo(labirinto,posX,posY+1, ESQUERDA, temQueijo)){
             labirinto[posX][posY]=VOLTANDO;
             exibirMapa(labirinto);
            return true;
        }else if(deOndeVeio != BAIXO and procurarQueijo(labirinto,posX+1,posY, CIMA, temQueijo)){
              labirinto[posX][posY]=VOLTANDO;
             exibirMapa(labirinto);
            return true;
        }else if(deOndeVeio != ESQUERDA and procurarQueijo(labirinto,posX,posY-1, DIREITA, temQueijo)){
              labirinto[posX][posY]=VOLTANDO;
             exibirMapa(labirinto);
            return true;
        }else if(deOndeVeio != CIMA and procurarQueijo(labirinto,posX-1,posY, BAIXO, temQueijo)){
              labirinto[posX][posY]=VOLTANDO;
             exibirMapa(labirinto);
            return true;
        }
    
    }
    return false;
}

#endif