#include<iostream>
#include<unistd.h>
#include<vector>
#include"c_arrays.h"
#include<fstream>


struct Tensor{
  array3d<double> x;
  array3d<double> y;
  array3d<double> z;
  int N_x;
  int N_y;
  Tensor(int N_x, int N_y, int N_z);
  int N_z;
};

struct FDTD
{
  Tensor E;
  Tensor H;
  Tensor J;
  // make arrays
  int N_x ;
  int N_y ;
  int N_z ;
  double c;
  double mu0 ;
  double eps0 ;
  double Hc ;
  double Ec ;
  double Jc ;
  FDTD(int N_x,int N_y,int N_z,double dx,double dt);
  void timestep();
};
