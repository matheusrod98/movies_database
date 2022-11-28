#include <iostream>
#include <string.h>

#include "movie.hpp"

using namespace std;

ostream &operator<<(ostream &out, Movie &movie) {
    out << "Name: " << movie.movieName << endl
	 << "Producer: " << movie.producerName << endl
	 << "Rate: " << movie.rate << endl;

    return out;
}

istream &operator>>(istream &in, Movie &movie) {
    
    // getline() was used here to obtain the entire line, not splitted between
    // whitespaces from the user.
    cout << "Please, enter the name of the movie: ";
    getline(cin, movie.movieName);

    cout << "Please, enter the name of the movie producer: ";
    getline(cin, movie.producerName);

    cout << "Please, enter the rate of the movie: ";
    in >> movie.rate;

    cout << movie << endl;
    return in;
}
