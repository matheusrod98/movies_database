#include <ostream>
#include <vector>
#include <string>

#include "catalog.hpp"
#include "movie.hpp"

using namespace std;

vector<Movie> Catalog::getMovies() {
    return movies;
}

ostream &operator<<(ostream &out, Catalog &catalog) {
    for (unsigned int movie = 0; movie < catalog.getMovies().size(); movie++) {
        out << "Movie name: " << catalog.getMovies().at(movie).movieName << endl 
	    << "Producer: " << catalog.getMovies().at(movie).producerName << endl
	    << "Rate: " << catalog.getMovies().at(movie).rate << endl;
    }

    return out;
}

unsigned int Catalog::operator()(string movieName) {
    vector<Movie> movies = Catalog::getMovies();
    for (unsigned int movieIndex = 0; movieIndex < movies.size(); movieIndex++) {
        if (Catalog::getMovies().at(movieIndex).movieName == movieName)
            return movieIndex;
    }

    return -1;
}
