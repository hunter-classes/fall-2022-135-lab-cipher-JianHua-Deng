#include <iostream>
#include <vector>
#include <fstream>
#include "funcs.h"

int main()
{

  std::string str = encryptCaesar("I am the best", 5);
  std::cout << solve(str) << "\n";
  
  return 0;
}
