#ifndef MOVIE_HPP
#define MOVIE_HPP

#include <iostream>
using namespace std;

class Movie {
private:
	
	static int numberOfMovies;
	int numberOfMinutes;
	string producer;
	string name;
	
	
public: 
    //Item 5: Know what functions C++ silently writes and calls.
    Movie(const Movie&); //copy constructor
	Movie operator=(Movie);
	string getName();
	string getProducer();
	int getNumberOfMinutes();
	void setName(string);
	void setProducer(string);
	void setNumberOfMinutes(int);
	static int getNumberOfMovies();
	void displayInfo();
	Movie(void); //default constructor
	Movie(string, string, int); //constructor with parameters
};

#endif