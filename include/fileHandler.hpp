#ifndef FILE_HANDLER_HPP
#define FILE_HANDLER_HPP

/*
* Handler for reading/writing to/from .txt files.
* 
* Only responsible for retreiving the content.
* Does not handle PARSING the content (SEE -> parser.hpp).
* 
* When dedux is opened fileHandler will run and attempt to
* open the last session worked on (if option is enabled). 
*/

#include <fstream>
#include <string>
#include <string_view>
#include <vector>

struct FileHandler 
{
  std::fstream m_stream{};
  
  FileHandler();

  bool LoadProject(std::ifstream input);
  bool ReadProject();
  bool WriteProject();
};

#endif // FILE_HANDLER_HPP