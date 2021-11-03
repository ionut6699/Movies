
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

/*
int main()
{   
    Movie m1("Avatar","James Cameron",120);
    Movie m2("Fast and Furious 9","Justin Lin",100);
    Movie m3("Conjuring","James Wan",104);
    
    //Item 5: Know what functions C++ silently writes and calls.
    //copy constructor
    Movie m4=m3;
    cout<<m4.getName()<<"\n";
    cout<<m3.getName()<<"\n";
    cout<<m3.getNumberOfMinutes()<<"\n";

    
    //Item 6: Explicitly disallow the use of compiler generated functions you do not want
    //copy constructor is private
    Cinema b1(m1);
    b1.getListOfMovies();
    //Cinema b2=b1;
    //assigment operator is private
    Cinema b3;
    //b3=b1;



}
*/

