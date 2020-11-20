#include <iostream>
#include "Labirinto.h"

using namespace std;

#ifndef Ratatouille_h
#define Ratatouille_h



bool procurarQueijoNaoImplementado(char labirinto[LARGURA][ALTURA],int posX,int posY, int deOndeVeio, bool &temQueijo){
    if(posX < 0 || posY < 0 || posX >= LARGURA || posY >= ALTURA){
        return false;
    }else if(labirinto[posX][posY]==QUEIJO){
        
        return true;
    }else if(labirinto[posX][posY]==PAREDE || labirinto[posX][posY] == RATO){
        return false;
    }else{
        

        if(deOndeVeio != DIREITA and procurarQueijoNaoImplementado(labirinto,posX,posY+1, ESQUERDA, temQueijo)){
            
            return true;
        }else if(deOndeVeio != BAIXO and procurarQueijoNaoImplementado(labirinto,posX+1,posY, CIMA, temQueijo)){
            
            return true;
        }else if(deOndeVeio != ESQUERDA and procurarQueijoNaoImplementado(labirinto,posX,posY-1, DIREITA, temQueijo)){
            
            return true;
        }else if(deOndeVeio != CIMA and procurarQueijoNaoImplementado(labirinto,posX-1,posY, BAIXO, temQueijo)){
            
            return true;
        }
        
    }
    return false;

}

#endif