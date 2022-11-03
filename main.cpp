#include <iostream>
#include <vector>
#include <fstream>
#include "funcs.h"

int main()
{

  std::string str = encryptCaesar("Possibilities of cons", 5);
  std::cout << "Encrypted string: "<< str << " = "<< solve(str) << "\n";


  return 0;
}
