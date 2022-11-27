#include <ostream>
#include <fstream>

#include "json.hpp"

std::ifstream db("db.json");
nlohmann::json data = nlohmann::json::parse(db);

std::cout << "jsdnfs" << std::endl;
