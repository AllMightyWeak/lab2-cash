//Copyright by AllMightyWeak

#include "Check.h"
#include "Time.h"

int main() {
  std::vector <int64_t> size;

  long i=1;
  while (i > 0 and i != 0){
    std::cout << "Укажите размер буфера: ";
    std::cin >> i;
    if(i>0 and i != 0)
      size.push_back(i);
  }
  Time inv(_random, size);
  inv.print(std::cout);
}