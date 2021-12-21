#include "../headers/Cinema.hpp"
using namespace std;

//Item 4: Make sure that objects are initialized before they’re used.
Cinema::Cinema()
{
    movies={};
}

//Item 4: Make sure that objects are initialized before they’re used.
Cinema::Cinema(Movie movie)
{
    movies.push_back(movie);
}

//Item 4: Make sure that objects are initialized before they’re used.
Cinema::Cinema(vector<Movie>movies)
{
    this->movies=movies;
}


void Cinema::getMovieByProducerAndName(string producer , string name)
{
    for(int i=0;i<movies.size();i++)
    {
        if((movies[i].getProducer()==producer) && (movies[i].getName()==name))
        {
            movies[i].displayInfo();
        }
    }
}
void Cinema::getListOfMovies()
{
    for(int i=0;i<movies.size();i++)
    {
        movies[i].displayInfo();
    }
}


void Cinema::addMovie(Movie m){
    this->movies.push_back(m);
}

void Cinema::deleteMovie(string producer,string name)
{
    for (int i=0;i<this->movies.size();i++)
    {
        if(this->movies[i].getName() == name && this->movies[i].getProducer() == producer )
        {
            this->movies.erase(this->movies.begin()+i);
            break ;
        }
    }
}


void Cinema::getMoviesByProducer(string producer)
{ for (int i=0;i<this->movies.size();i++)
   {
       if(this->movies[i].getProducer()==producer)
       {
           movies[i].displayInfo();
       }
   }
}


