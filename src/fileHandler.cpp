#include "fileHandler.hpp"

FileHandler::FileHandler() {

}

FileHandler::FileHandler(std::string path) 
  : m_stream{path} 
{
  m_stream ? pathFound = true : pathFound = false;
}

void FileHandler::LoadProject(std::ifstream input) {
  
}

void FileHandler::ReadProject() {
  std::string temp{};
  while (std::getline(m_stream, temp)) {
    m_buffer += temp + '\n';
  }
}

void FileHandler::WriteProject() {
  
}
