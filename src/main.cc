#include <iostream>

#include "hoge.h"

int main(void) {
  Hoge h;
  std::cout << "Hoge(3): " << h.Add5(3) << std::endl;
  std::cout << "Hoge(0): " << h.Add5(0) << std::endl;
  return 0;
}
