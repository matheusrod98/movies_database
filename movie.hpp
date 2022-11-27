#ifndef _MOVIE_
#define _MOVIE_

#include <string>
#include <ostream>

using namespace std;

typedef struct Movie {
    string movieName;
    string producerName;
    double rate;
} Movie;

ostream &operator<<(ostream &out, Movie &movie);

#endif /* _MOVIE */
