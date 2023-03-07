#include "fileHandler.hpp"

FileHandler::FileHandler() {

}

FileHandler::FileHandler(const std::string& path) {
  LoadFile(path);
}

void FileHandler::LoadFile(const std::string& path) {
  m_stream.open(path);
  m_buffer = ReadFile();
  m_stream.close();
}

std::optional<std::string> FileHandler::ReadFile() {
  if (m_stream) {
    std::string temp{};
    std::string result{};
    while (std::getline(m_stream, temp)) {
      result += temp + '\n';
    }
    return result;
  }
  return {};
}

void FileHandler::WriteFile() {
  
}
