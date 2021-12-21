#include "../headers/Movie.hpp"
using namespace std;

//copy constructor
Movie::Movie(const Movie& m){
    std::cout<<"Copy Constructor\n";
    name=m.name;
    producer=m.producer;
    numberOfMinutes=m.numberOfMinutes;
}

// Item 10: Have assignment operators return a reference to *this.
// Item 11: Handle assignment to self in operator=.
// Item 12: Copy all parts of an object.


//assigment operator
Movie &Movie::operator=(const Movie &m) 
{
    std::cout<<"Assignment operator \n";

    if(this == &m) // item 11
    {
        std::cout << "SELF-ASIGNMENT!!" << std::endl;
        return *this;
    }

    //item 12, copy all
    name=m.name;
    producer=m.producer;
    numberOfMinutes=m.numberOfMinutes;
    return *this;  // item 10
}


//default constructor
//Item 4: Make sure that objects are initialized before they’re used.
Movie::Movie() :
    name("None"),
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

Movie::~Movie(){
    std::cout<<"DESTRUCTOR\n";
}



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

void Movie::setIsLocked(bool isLocked){
    this->isLocked = isLocked;
}

void Movie::checkAvailability(){
    if(this->isLocked == true)
        cout << "is Locked"<<endl;
    else    
        cout << "is Available"<<endl;
}
