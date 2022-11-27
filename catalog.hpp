#ifndef _CATALOG_
#define _CATALOG_

#include <vector>

#include "movie.hpp"

using namespace std;

class Catalog {
    private:
        const int maxMovies = 256;
        vector<Movie> movies;
    
    public:
        vector<Movie> getMovies();
	unsigned int operator()(string movieName);
};

#endif /* _CATALOG_ */
