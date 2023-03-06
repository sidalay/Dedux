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

struct FileHandler 
{
  std::fstream m_stream{};
  std::string m_buffer{};
  bool pathFound{};
  
  FileHandler();
  FileHandler(std::string path);

  void LoadProject(std::ifstream input);
  void ReadProject();
  void WriteProject();
};

#endif // FILE_HANDLER_HPP