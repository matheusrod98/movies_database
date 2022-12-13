#ifndef _CATALOG_
#define _CATALOG_

#include <vector>
#include <ostream>

#include "json.hpp"

#include "movie.hpp"

#define MOVIES_DB "db.json"

using namespace std;

class Catalog {
    friend ostream &operator<<(ostream &out, Catalog &catalog);

    private:
        const int maxMovies = 256;
        vector<Movie> movies;
        nlohmann::json data;
    
    public:
        Catalog();
        vector<Movie> &getMovies();
        int operator()(string movieName, string attributeName, string attributeNewValue);
        int operator()(string movieName);
};

#endif /* _CATALOG_ */
