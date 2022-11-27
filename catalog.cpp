#include <ostream>
#include <vector>

#include "json.hpp"

#include "catalog.hpp"

using namespace std;

vector<Movie> Catalog::getMovies() {
    return movies;
}

ostream &operator<< (ostream &out, Catalog &catalog) {
    for (unsigned int movie = 0; movie < catalog.getMovies().size(); movie++) {
        out << "Movie name: " << catalog.getMovies().at(movie).movieName << endl 
	    << "Producer: " << catalog.getMovies().at(movie).producerName << endl
	    << "Rate: " << catalog.getMovies().at(movie).rate << endl;
    }

    return out;
}
