#include <iostream>
#include "fileHandler.hpp"

int main() {
  // path needs to be loaded "dynamically"  
  // needs to know the previous session
  FileHandler handler{"projects/testproject.txt"};
  handler.ReadProject();
  std::cout << "----------------------------\n";
  std::cout << (handler.pathFound ? handler.m_buffer : "path does not exist\n");
}