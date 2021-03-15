#include <iostream>
#include "sculptor.h"
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    Sculptor teste(2,2,2);
    teste.setColor(0,0,1);
    teste.putVoxel(1,1,1);
    teste.setColor(0,1,0);
    teste.putVoxel(0,0,0);
    teste.setColor(1,0,0);
    teste.putVoxel(0,0,1);
    teste.cutVoxel(0,0,1);
    teste.writeOFF((char*)"D:/teste2.off");

    Sculptor desenho(11,11,11);
    desenho.setColor(1,1,0);
    desenho.putBox(0,10,0,10,0,10);
    for(int i = 0; i <= 10; i++){
        desenho.cutVoxel(i,0,1);
    }
    desenho.writeOFF((char*)"D:/desenho.off");
    cout << "Programa finalizado com sucesso" << endl;
    return 0;
}
