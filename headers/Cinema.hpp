#ifndef CINEMA_HPP
#define CINEMA_HPP

#include "Movie.hpp"
#include <iostream>
#include <vector>
using namespace std;

class Cinema
{
private:
	vector<Movie> movies;
	//Item 6: Explicitly disallow the use of compiler generated functions you do not want
    Cinema(const Cinema& ); // copy constructor declared private and without implementation
    Cinema& operator=(const Cinema& ) ; // assigment operator declared private and without implementation

public:
    
	void getListOfMovies();
	void getMovieByProducerAndName(string ,string);
	void getMoviesByProducer(string);
	void addMovie(Movie);
	void deleteMovie(string producer, string name);
	Cinema (Movie);//constructor
    Cinema(vector<Movie>); //constructor 
    Cinema();//default constructor
};
#endif
