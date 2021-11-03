#include "../headers/Movie.hpp"
using namespace std;

//copy constructor
Movie::Movie(const Movie& m){
    name=m.name;
    producer=m.producer;
    numberOfMinutes=m.numberOfMinutes;
}
//assigment operator
Movie Movie::operator=(Movie m) 
{
    name=m.getName();
    producer=m.getProducer();
    numberOfMinutes=m.getNumberOfMinutes();
    return *this;
}



//default constructor
//Item 4: Make sure that objects are initialized before they’re used.
Movie::Movie() :
    name(""),
    producer(""),
    numberOfMinutes(0)
{
    numberOfMovies++;
};
//constructor with parameters
//Item 4: Make sure that objects are initialized before they’re used.
Movie::Movie(string name, string producer, int numberOfMinutes) :
    name(name),
    producer(producer),
    numberOfMinutes(numberOfMinutes)
{
    numberOfMovies++;
};


int Movie::numberOfMovies = 0;
string Movie::getProducer() {
    return this->producer;
}
string Movie::getName() {
    return this->name;
}
int Movie::getNumberOfMinutes() {
    return this->numberOfMinutes;
}
int Movie::getNumberOfMovies() {
    return numberOfMovies;
}
void Movie::displayInfo() {
    cout << "Name :" << this->name << " Producer: " << this->producer << " Number of minutes: " << this->numberOfMinutes<<endl;
}
void Movie::setProducer(string producer) {
    this->producer = producer;
}
void Movie::setName(string name) {
    this->name = name;
}
void Movie::setNumberOfMinutes(int numberOfMinutes){
    this->numberOfMinutes = numberOfMinutes;
}
