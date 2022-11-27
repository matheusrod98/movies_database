#include <ostream>

#include "movie.hpp"

using namespace std;

ostream &operator<<(ostream &out, Movie &movie) {
    out << "Name: " << movie.movieName << endl
	 << "Producer: " << movie.producerName << endl
	 << "Rate: " << movie.rate << endl;

    return out;
}
