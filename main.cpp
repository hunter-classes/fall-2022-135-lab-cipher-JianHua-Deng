#include <iostream>
#include <vector>
#include "funcs.h"

int main()
{
  std::vector<double> vector = string_frequency("ABCD");
  for(int i = 0; i < vector.size(); i++){
    std::cout << vector.at(i) << std::endl;
  }
  return 0;
}
