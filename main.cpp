#include <iostream>
#include <fstream>

#include "json.hpp"

#include "catalog.hpp"
#include "movie.hpp"

using namespace std;

int main() {

    Catalog catalog;
    
    cout << catalog << endl;

    cout << catalog("citizen kane") << endl;


    return 0;
}
