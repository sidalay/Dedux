#ifndef PROJECT_HANDLER_HPP
#define PROJECT_HANDLER_HPP

#include <map>

#include "fileHandler.hpp"

struct ProjectHandler
{
  ProjectHandler();

private: 
  FileHandler m_fileHandler{};
  std::map<std::string, Project> m_projects{};
};

#endif // PROJECT_HANDLER_HPP