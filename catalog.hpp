#ifndef _CATALOG_
#define _CATALOG_

#include <vector>
#include <ostream>

#include "json.hpp"

#include "movie.hpp"

#define MOVIES_DB "db.json"

using namespace std;

class Catalog {
    private:
        const int maxMovies = 256;
        vector<Movie> movies;
	nlohmann::json data;
    
    public:
	Catalog();
        vector<Movie> getMovies();
	unsigned int operator()(string movieName);
	ostream &operator<<(Catalog &catalog);
};

#endif /* _CATALOG_ */
