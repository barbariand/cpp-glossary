#include <iostream>
#include "my_math.h"

int main() {
  // Funktionen existerar utan headerfilen, men headerfilen deklarerar
  // att den finns tillgänglig för dig att använda och även var den
  // finns att hämta.
  std::cout << "1 + 2 = " << add(1, 2) << std::endl;
}
