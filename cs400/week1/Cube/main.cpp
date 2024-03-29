/**
 * C++ code for creating a Cube of length 2.4 units.
 * - See ../cpp-std/main.cpp for a similar program with print statements.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include "Cube.h"

int main() {
  uiuc::Cube c;

  c.setLength(2.4);
  double volume = c.getVolume();
  std::cout << "Volume: " << volume << std::endl;

  double surfaceArea = c.getSurfaceArea();
  std::cout<<"Surface Area: "<<surfaceArea<<std::endl;

  return 0;
}
