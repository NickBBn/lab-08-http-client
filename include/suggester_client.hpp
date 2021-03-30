//Copyright [2021] <Copyright nickgeo.winner@gmail.com>

#ifndef INCLUDE_SUGGESTER_HPP_
#define INCLUDE_SUGGESTER_HPP_
#include "nlohmann/json.hpp"
#include <iostream>
#include <thread>
#include <fstream>
#include <shared_mutex>
#include <sstream>
#include <ostream>
#include <iomanip>
#include <memory>
#include <string>

class suggester_client {
 public:
  std::string request();
  void parse_suggest(const std::string& response_json,
                                   std::ostream& out);
};


#endif  // INCLUDE_SUGGESTER_HPP_
