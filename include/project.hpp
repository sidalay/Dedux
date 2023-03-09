#ifndef PROJECT_HPP
#define PROJECT_HPP

/*
* Structure that stores all of the information
* parsed from the .txt file
* 
* File & Project ID
* Metadata
* Main Content
*/

#include <string>
#include <fstream>

struct Project 
{
  Project();

  int m_date{};
  std::string m_id{};
  std::string m_title{};
  std::string m_username{};
  std::string m_body{};
  std::fstream m_stream{};
};

#endif // PROJECT_HPP