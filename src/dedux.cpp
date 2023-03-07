#include <iostream>
#include "fileHandler.hpp"

int main() {
  // path needs to be loaded "dynamically"  
  // needs to know the previous session
  FileHandler handler{"projects/testprojec.txt"};

  std::cout << "--------------------------\n";
  std::cout << "|      File Sample 1     |\n";
  std::cout << "--------------------------\n";
  std::cout << (handler.GetBuffer() ? handler.GetBuffer().value() : "path does not exist\n\n");

  std::cout << "--------------------------\n";
  std::cout << "|      File Sample 2     |\n";
  std::cout << "--------------------------\n";
  handler.LoadFile("projects/testproject.txt");
  std::cout << (handler.GetBuffer() ? handler.GetBuffer().value() : "path does not exist\n");
}