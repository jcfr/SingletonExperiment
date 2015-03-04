
#include "Component1.h"
#include "Component2.h"

// STD includes
#include <cstdlib>
#include <iostream>

int main(int, char*[])
{
  std::cout << "main: Hello" << std::endl;
  Component1 component1;
  Component2 component2;
  std::cout << "main: Bye" << std::endl;
}
