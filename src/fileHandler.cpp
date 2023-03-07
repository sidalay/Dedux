#include "fileHandler.hpp"

FileHandler::FileHandler() {

}

FileHandler::FileHandler(const std::string& path) {
  LoadProject(path);
}

void FileHandler::LoadProject(const std::string& path) {
  m_stream.open(path);
  pathFound = m_stream ? true : false;
  if (m_stream) {
    ReadProject();
    m_stream.close();
  }
}

void FileHandler::ReadProject() {
  std::string temp{};
  while (std::getline(m_stream, temp)) {
    m_buffer += temp + '\n';
  }
}

void FileHandler::WriteProject() {
  
}
