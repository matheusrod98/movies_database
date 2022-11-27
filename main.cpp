#include <iostream>
#include <fstream>

#include "json.hpp"

#include "catalog.hpp"
#include "movie.hpp"

using namespace std;

int main() {

    Catalog catalog;
    
    cout << catalog << endl;

    // vector<Movie> movies = catalog.getMovies();
    // for (unsigned int movieIndex = 0; movieIndex < movies.size(); movieIndex++) {
    //     cout << movies.at(movieIndex) << endl;
    // }


    return 0;
}
