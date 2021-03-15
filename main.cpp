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
    teste.writeOFF((char*)"D:/teste2.off");
    cout << "Programa finalizado com sucesso" << endl;
    return 0;
}
