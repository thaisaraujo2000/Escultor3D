#include <iostream>
#include "sculptor.h"
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    Sculptor pucca(100,100,100);
    //esfera.setColor(0,0,0);
    //esfera.putSphere(10,10,5,4);
    //esfera.putSphere(22,10,5,4);
    pucca.setColor(10,55,84);
    int c = 25;
    //Rosto
    pucca.putEllipsoid(c,c,c,9,6,3);
    pucca.cutVoxel(0+c,0+c,3+c);
    pucca.cutVoxel(0+c,6+c,0+c);
    pucca.cutVoxel(9+c,0+c,0+c);
    pucca.cutVoxel(c-9,0+c,0+c);
    pucca.cutVoxel(0+c,c-6,0+c);
    pucca.cutVoxel(0+c,0+c,c-3);
    //Pintando olhos parte 1
    pucca.cutVoxel(c-3, c+0, c+2);
    pucca.cutVoxel(c-4, c+0, c+2);
    pucca.cutVoxel(c-5, c+0, c+2);
    pucca.cutVoxel(c+3, c+0, c+2);
    pucca.cutVoxel(c+4, c+0, c+2);
    pucca.cutVoxel(c+5, c+0, c+2);
    //pintando os olhos parte 2
    pucca.cutVoxel(c+6, c+1, c+2);
    pucca.cutVoxel(c-6, c+1, c+2);
    //pintando a boca
    pucca.cutVoxel(c+0, c-3, c+2);
    pucca.cutVoxel(c+1, c-2, c+2);
    pucca.cutVoxel(c-1, c-2, c+2);
    pucca.setColor(255,255,255);
    pucca.putVoxel(c-3, c+0, c+2);
    pucca.putVoxel(c-4, c+0, c+2);
    pucca.putVoxel(c-5, c+0, c+2);
    pucca.putVoxel(c+3, c+0, c+2);
    pucca.putVoxel(c+4, c+0, c+2);
    pucca.putVoxel(c+5, c+0, c+2);
    pucca.putVoxel(c+6, c+1, c+2);
    pucca.putVoxel(c-6, c+1, c+2);
    pucca.putVoxel(c+0, c-3, c+2);
    pucca.putVoxel(c+1, c-2, c+2);
    pucca.putVoxel(c-1, c-2, c+2);

    //colocando bolinhas do cabelo
    pucca.setColor(255,255,255);
    pucca.putSphere(c+10, c+4, c, 3);
    pucca.putSphere(c-10, c+4, c, 3);
    //acrescentando cabelo
    for(int i =-4; i <=4; i++){
        pucca.putVoxel(c+i, c+6, c+0);
    }
    for(int i =-3; i <=3; i++){
        pucca.putVoxel(c+i, c+6, c+1);
    }
    for(int i =-3; i <=3; i++){
        pucca.putVoxel(c+i, c+6, c-1);
    }
    for(int i =4; i <=6; i++){
        pucca.putVoxel(c+i, c+5, c+1);
    }
    for(int i =4; i <=6; i++){
        pucca.putVoxel(c+i, c+5, c-1);
    }
    for(int i =-4; -i <=6; i--){
        pucca.putVoxel(c+i, c+5, c+1);
    }
    for(int i =-4; -i <=6; i--){
        pucca.putVoxel(c+i, c+5, c-1);
    }
    pucca.putVoxel(c+5, c+6, c+0);
    pucca.putVoxel(c-5, c+6, c+0);
    pucca.putVoxel(c+6, c+5, c+0);
    pucca.putVoxel(c-6, c+5, c+0);
    pucca.putVoxel(c+4, c+6, c+1);
    pucca.putVoxel(c-4, c+6, c+1);
    pucca.putVoxel(c+4, c+6, c-1);
    pucca.putVoxel(c-4, c+6, c-1);
    pucca.putVoxel(c+7, c+4, c+1);
    pucca.putVoxel(c-7, c+4, c+1);
    pucca.putVoxel(c+7, c+4, c-1);
    pucca.putVoxel(c-7, c+4, c-1);
    for(int i =-3; i <=3; i++){
        pucca.putVoxel(c+i, c+7, c-1);
    }
    for(int i =-3; i <=3; i++){
        pucca.putVoxel(c+i, c+7, c-0);
    }
    for(int i =-3; i <=3; i++){
        pucca.putVoxel(c+i, c+7, c+1);
    }
    //lacinho
    pucca.setColor(1,0,0);
    pucca.putVoxel(c+7, c+5, c+1);
    pucca.putVoxel(c+7, c+5, c+0);
    pucca.putVoxel(c+7, c+5, c-1);
    pucca.putVoxel(c-7, c+5, c+1);
    pucca.putVoxel(c-7, c+5, c+0);
    pucca.putVoxel(c-7, c+5, c-1);

    //tirando cabelo para colocar lacinho
    pucca.cutVoxel(c+8, c+4, c+2);
    pucca.cutVoxel(c+8, c+3, c+2);
    pucca.cutVoxel(c-8, c+4, c+2);
    pucca.cutVoxel(c-8, c+3, c+2);
    pucca.setColor(1,0,0);
    pucca.putVoxel(c+8, c+4, c+2);
    pucca.putVoxel(c+8, c+3, c+2);
    pucca.putVoxel(c-8, c+4, c+2);
    pucca.putVoxel(c-8, c+3, c+2);

    //colocando cabelo atrás da cabeça
    pucca.setColor(255,255,255);
    pucca.putEllipsoid(c,c,c-3,8,5,1);
    pucca.cutVoxel(c,c,c-4);
    pucca.cutVoxel(c+8,c,c-3);
    pucca.cutVoxel(c-8,c,c-3);
    pucca.cutVoxel(c,c+5,c-3);
    pucca.cutVoxel(c,c-5,c-3);

    for(int i =-4; i <=4; i++){
        pucca.putVoxel(c+i, c+5, c-2);
    }
    pucca.putVoxel(c+4, c+4, c-2);
    pucca.putVoxel(c+5, c+4, c-2);
    pucca.putVoxel(c+6, c+4, c-2);
    pucca.putVoxel(c-4, c+4, c-2);
    pucca.putVoxel(c-5, c+4, c-2);
    pucca.putVoxel(c-6, c+4, c-2);
    pucca.putVoxel(c+7, c+2, c-2);
    pucca.putVoxel(c-7, c+2, c-2);
    pucca.putVoxel(c+7, c+3, c-2);
    pucca.putVoxel(c-7, c+3, c-2);
    for(int j =-1; j <=1; j++){
        pucca.putVoxel(c+9, c+j, c+1);
    }
    for(int j =-1; j <=1; j++){
        pucca.putVoxel(c-9, c+j, c+1);
    }
    for(int i =-3; i <=3; i++){
        pucca.putVoxel(c+i, c-6, c+1);
    }
    pucca.putVoxel(c-4, c-5, c+1);
    pucca.putVoxel(c+4, c-5, c+1);
    pucca.putVoxel(c-5, c-5, c+1);
    pucca.putVoxel(c+5, c-5, c+1);
    pucca.putVoxel(c-6, c-5, c+1);
    pucca.putVoxel(c+6, c-5, c+1);
    pucca.putVoxel(c-7, c-4, c+1);
    pucca.putVoxel(c+7, c-4, c+1);
    pucca.setColor(10,55,84);
    pucca.putVoxel(c-8, c-2, c+1);
    pucca.putVoxel(c+8, c-2, c+1);
    pucca.setColor(255,255,255);
    pucca.putVoxel(c-8, c-3, c+1);
    pucca.putVoxel(c+8, c-3, c+1);
    pucca.putVoxel(c-9, c-2, c+1);
    pucca.putVoxel(c+9, c-2, c+1);

    for(int i = 1; i >=-2; i--){
        pucca.putVoxel(c+9, c+i, c+0);
    }

    for(int i = 1; i >=-2; i--){
        pucca.putVoxel(c-9, c+i, c+0);
    }

    for(int i = 1; i >=-2; i--){
        pucca.putVoxel(c+9, c+i, c-1);
    }

    for(int i = 1; i >=-2; i--){
        pucca.putVoxel(c-9, c+i, c-1);
    }

    for(int i = 1; i >=-2; i--){
        pucca.putVoxel(c-9, c+i, c-2);
    }

    for(int i = 1; i >=-2; i--){
        pucca.putVoxel(c+8, c+i, c-2);
    }

    for(int i = 1; i >=-2; i--){
        pucca.putVoxel(c-8, c+i, c-2);
    }

    for(int i = 1; i >=-2; i--){
        pucca.putVoxel(c+7, c+i, c-2);
    }

    for(int i = 1; i >=-2; i--){
        pucca.putVoxel(c-7, c+i, c-2);
    }

    for(int i = -4; i <=4; i++){
        pucca.putVoxel(c+i, c-6, c+0);
    }

    for(int i = -3; i <=3; i++){
        pucca.putVoxel(c+i, c-6, c-1);
    }

    for(int i = -3; i <=3; i++){
        pucca.putVoxel(c+i, c-4, c-2);
    }
    for(int i = -3; i <=3; i++){
        pucca.putVoxel(c+i, c-5, c-2);
    }






    pucca.writeOFF((char*)"C:/Users/Thais/Documents/pucca.off");
    cout << "Programa finalizado com sucesso" << endl;
    return 0;
}
