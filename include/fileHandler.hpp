#ifndef FILE_HANDLER_HPP
#define FILE_HANDLER_HPP

/*
* Handler for reading/writing to/from .txt files.
* 
* Only handles a SINGLE projects at any given moment.
*
* READING:
* Only responsible for retreiving the content.
* Does not handle PARSING the content (SEE -> parser.hpp).
* 
* When dedux is opened fileHandler will run and attempt to
* open the last session worked on (if the option is enabled). 
*/

#include <fstream>
#include <string>
#include <string_view>
#include <vector>
#include <optional>

struct FileHandler 
{  
  FileHandler();
  FileHandler(const std::string& path);

  void LoadFile(const std::string& path);
  void WriteFile();
  
  [[nodiscard]] std::optional<std::string> GetBuffer() const {return m_buffer;}
private:
  std::fstream m_stream{};
  std::optional<std::string> m_buffer{};
  [[nodiscard]] std::optional<std::string> ReadFile();
};

#endif // FILE_HANDLER_HPP