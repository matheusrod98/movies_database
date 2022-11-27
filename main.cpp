#include <iostream>
#include <fstream>

#include "json.hpp"

#include "catalog.hpp"
#include "movie.hpp"

using namespace std;

int main() {

    ifstream db("db.json");
    nlohmann::json data = nlohmann::json::parse(db);
     
    cout << data << endl;

    Catalog catalog;

    cout << catalog("The Godfather") << endl; 

    return 0;
}

