#include <iostream>
#include "sculptor.h"
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    Sculptor esfera(100,100,100);
    //esfera.setColor(0,0,0);
    //esfera.putSphere(10,10,5,4);
    //esfera.putSphere(22,10,5,4);
    esfera.setColor(10,55,84);
    int c = 25;
    //Rosto
    esfera.putEllipsoid(c,c,c,9,6,3);
    esfera.cutVoxel(0+c,0+c,3+c);
    esfera.cutVoxel(0+c,6+c,0+c);
    esfera.cutVoxel(9+c,0+c,0+c);
    esfera.cutVoxel(c-9,0+c,0+c);
    esfera.cutVoxel(0+c,c-6,0+c);
    esfera.cutVoxel(0+c,0+c,c-3);
    //Pintando olhos parte 1
    esfera.cutVoxel(c-3, c+0, c+2);
    esfera.cutVoxel(c-4, c+0, c+2);
    esfera.cutVoxel(c-5, c+0, c+2);
    esfera.cutVoxel(c+3, c+0, c+2);
    esfera.cutVoxel(c+4, c+0, c+2);
    esfera.cutVoxel(c+5, c+0, c+2);
    //pintando os olhos parte 2
    esfera.cutVoxel(c+6, c+1, c+2);
    esfera.cutVoxel(c-6, c+1, c+2);
    //pintando a boca
    esfera.cutVoxel(c+0, c-3, c+2);
    esfera.cutVoxel(c+1, c-2, c+2);
    esfera.cutVoxel(c-1, c-2, c+2);
    esfera.setColor(255,255,255);
    esfera.putVoxel(c-3, c+0, c+2);
    esfera.putVoxel(c-4, c+0, c+2);
    esfera.putVoxel(c-5, c+0, c+2);
    esfera.putVoxel(c+3, c+0, c+2);
    esfera.putVoxel(c+4, c+0, c+2);
    esfera.putVoxel(c+5, c+0, c+2);
    esfera.putVoxel(c+6, c+1, c+2);
    esfera.putVoxel(c-6, c+1, c+2);
    esfera.putVoxel(c+0, c-3, c+2);
    esfera.putVoxel(c+1, c-2, c+2);
    esfera.putVoxel(c-1, c-2, c+2);

    //colocando bolinhas do cabelo
    esfera.setColor(255,255,255);
    esfera.putSphere(c+10, c+4, c, 3);
    esfera.putSphere(c-10, c+4, c, 3);
    //acrescentando cabelo
    for(int i =-4; i <=4; i++){
        esfera.putVoxel(c+i, c+6, c+0);
    }
    for(int i =-3; i <=3; i++){
        esfera.putVoxel(c+i, c+6, c+1);
    }
    for(int i =-3; i <=3; i++){
        esfera.putVoxel(c+i, c+6, c-1);
    }
    for(int i =4; i <=6; i++){
        esfera.putVoxel(c+i, c+5, c+1);
    }
    for(int i =4; i <=6; i++){
        esfera.putVoxel(c+i, c+5, c-1);
    }
    for(int i =-4; -i <=6; i--){
        esfera.putVoxel(c+i, c+5, c+1);
    }
    for(int i =-4; -i <=6; i--){
        esfera.putVoxel(c+i, c+5, c-1);
    }
    esfera.putVoxel(c+5, c+6, c+0);
    esfera.putVoxel(c-5, c+6, c+0);
    esfera.putVoxel(c+6, c+5, c+0);
    esfera.putVoxel(c-6, c+5, c+0);
    esfera.putVoxel(c+4, c+6, c+1);
    esfera.putVoxel(c-4, c+6, c+1);
    esfera.putVoxel(c+4, c+6, c-1);
    esfera.putVoxel(c-4, c+6, c-1);
    esfera.putVoxel(c+7, c+4, c+1);
    esfera.putVoxel(c-7, c+4, c+1);
    esfera.putVoxel(c+7, c+4, c-1);
    esfera.putVoxel(c-7, c+4, c-1);
    for(int i =-3; i <=3; i++){
        esfera.putVoxel(c+i, c+7, c-1);
    }
    for(int i =-3; i <=3; i++){
        esfera.putVoxel(c+i, c+7, c-0);
    }
    for(int i =-3; i <=3; i++){
        esfera.putVoxel(c+i, c+7, c+1);
    }
    //lacinho
    esfera.setColor(1,0,0);
    esfera.putVoxel(c+7, c+5, c+1);
    esfera.putVoxel(c+7, c+5, c+0);
    esfera.putVoxel(c+7, c+5, c-1);
    esfera.putVoxel(c-7, c+5, c+1);
    esfera.putVoxel(c-7, c+5, c+0);
    esfera.putVoxel(c-7, c+5, c-1);

    //tirando cabelo para colocar lacinho
    esfera.cutVoxel(c+8, c+4, c+2);
    esfera.cutVoxel(c+8, c+3, c+2);
    esfera.cutVoxel(c-8, c+4, c+2);
    esfera.cutVoxel(c-8, c+3, c+2);
    esfera.setColor(1,0,0);
    esfera.putVoxel(c+8, c+4, c+2);
    esfera.putVoxel(c+8, c+3, c+2);
    esfera.putVoxel(c-8, c+4, c+2);
    esfera.putVoxel(c-8, c+3, c+2);

    //colocando cabelo atrás da cabeça
    esfera.setColor(255,255,255);
    esfera.putEllipsoid(c,c,c-3,8,5,1);
    esfera.cutVoxel(c,c,c-4);
    esfera.cutVoxel(c+8,c,c-3);
    esfera.cutVoxel(c-8,c,c-3);
    esfera.cutVoxel(c,c+5,c-3);
    esfera.cutVoxel(c,c-5,c-3);

    for(int i =-4; i <=4; i++){
        esfera.putVoxel(c+i, c+5, c-2);
    }
    esfera.putVoxel(c+4, c+4, c-2);
    esfera.putVoxel(c+5, c+4, c-2);
    esfera.putVoxel(c+6, c+4, c-2);
    esfera.putVoxel(c-4, c+4, c-2);
    esfera.putVoxel(c-5, c+4, c-2);
    esfera.putVoxel(c-6, c+4, c-2);
    esfera.putVoxel(c+7, c+2, c-2);
    esfera.putVoxel(c-7, c+2, c-2);
    esfera.putVoxel(c+7, c+3, c-2);
    esfera.putVoxel(c-7, c+3, c-2);
    for(int j =-1; j <=1; j++){
        esfera.putVoxel(c+9, c+j, c+1);
    }
    for(int j =-1; j <=1; j++){
        esfera.putVoxel(c-9, c+j, c+1);
    }
    for(int i =-3; i <=3; i++){
        esfera.putVoxel(c+i, c-6, c+1);
    }
    esfera.putVoxel(c-4, c-5, c+1);
    esfera.putVoxel(c+4, c-5, c+1);
    esfera.putVoxel(c-5, c-5, c+1);
    esfera.putVoxel(c+5, c-5, c+1);
    esfera.putVoxel(c-6, c-5, c+1);
    esfera.putVoxel(c+6, c-5, c+1);
    esfera.putVoxel(c-7, c-4, c+1);
    esfera.putVoxel(c+7, c-4, c+1);
    esfera.setColor(10,55,84);
    esfera.putVoxel(c-8, c-2, c+1);
    esfera.putVoxel(c+8, c-2, c+1);
    esfera.setColor(255,255,255);
    esfera.putVoxel(c-8, c-3, c+1);
    esfera.putVoxel(c+8, c-3, c+1);
    esfera.putVoxel(c-9, c-2, c+1);
    esfera.putVoxel(c+9, c-2, c+1);




    esfera.writeOFF((char*)"D:/esfera.off");
    cout << "Programa finalizado com sucesso" << endl;
    return 0;
}
