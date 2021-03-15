#ifndef SCULPTOR_H
#define SCULPTOR_H
#include <fstream>

struct Voxel {
  float r,g,b; // Colors
// Transparency
  bool isOn; // Included or not
};

class Sculptor {
protected:
  Voxel ***v; //Matriz 3D
  int nx,ny,nz; // Dimensões da matriz
  float r,g,b; // Cores da matriz
public:
  Sculptor(int _nx, int _ny, int _nz); //pronto
  ~Sculptor(); //pronto
  void setColor(float _r, float _g, float _b); //pronto
  void putVoxel(int x, int y, int z); //pronto
  void cutVoxel(int x, int y, int z); //pronto
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
  void putSphere(int xcenter, int ycenter, int zcenter, int radius);
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  void writeOFF(char *filename); //pronto
};

#endif
