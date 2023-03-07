#include <iostream>
#include "fileHandler.hpp"

int main() {
  // path needs to be loaded "dynamically"  
  // needs to know the previous session
  FileHandler handler{"projects/testprojec.txt"};

  std::cout << "----------------------------\n";
  std::cout << (handler.pathFound ? handler.m_buffer : "path does not exist\n");

  handler.LoadProject("projects/testproject.txt");
  std::cout << "\n----------------------------\n";
  std::cout << (handler.pathFound ? handler.m_buffer : "path does not exist\n");
}