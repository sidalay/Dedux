#include "fileHandler.hpp"

FileHandler::FileHandler() {

}

FileHandler::FileHandler(std::string path) {
  LoadProject(path);
}

void FileHandler::LoadProject(std::string path) {
  m_stream.open(path);
  pathFound = m_stream ? true : false;
}

void FileHandler::ReadProject() {
  std::string temp{};
  while (std::getline(m_stream, temp)) {
    m_buffer += temp + '\n';
  }
}

void FileHandler::WriteProject() {
  
}
