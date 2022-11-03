#include <iostream>
#include <vector>
#include <fstream>
#include "funcs.h"

int main()
{

  std::vector<double> vector1 = string_frequency("a,b,c,d,E,f,G,H,I,J,K,l,n,M,O,P,Q,r,s,t,u,v,w,x,Y,Z");
  for(int i = 0; i < vector1.size(); i++){
    std::cout << vector1[i] << std::endl;
  }

  std::string str = encryptCaesar("I am the best", 5);
  std::cout << "Encrypted string: "<< str << " = "<< solve(str) << "\n";
  
  return 0;
}
