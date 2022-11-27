#include <ostream>
#include <vector>
#include <string>
#include <fstream>

#include "json.hpp"

#include "catalog.hpp"
#include "movie.hpp"

using namespace std;

Catalog::Catalog() {
    ifstream db(MOVIES_DB);
    nlohmann::json jsonMovies = nlohmann::json::parse(db);
    
    for (unsigned int movieIndex = 0; movieIndex < jsonMovies.size(); movieIndex++) {
        Movie movie {
            jsonMovies.at(movieIndex)["movieName"].get<string>(),
            jsonMovies.at(movieIndex)["producerName"].get<string>(),
            jsonMovies.at(movieIndex)["rate"].get<double>(),
        };
        Catalog::movies.push_back(movie);
    }
}

vector<Movie> Catalog::getMovies() {
    return movies;
}

ostream &operator<<(ostream &out) {
    vector<Movie> movies = catalog.getMovies();
    for (unsigned int movie = 0; movie < movies.size(); movie++) {
        out << "Movie name: " << movies.at(movie).movieName << endl;
	    out << "Producer: " << movies.at(movie).producerName << endl;
	    out << "Rate: " << movies.at(movie).rate << endl;
        out << endl;
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
