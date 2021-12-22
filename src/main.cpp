#include "../headers/Cinema.hpp"
#include "../headers/Movie.hpp"
#include <iostream>
#include <memory>
//Item 4: Make sure that objects are initialized before they’re used.
//Item 5: Know what functions C++ silently writes and calls.
//Item 6: Explicitly disallow the use of compiler generated functions you do not want


Movie* createMovieInstance(){
    return (new Movie);
}

void lock(Movie &m){
    cout<<"Locking Movie"<<endl;
    m.setIsLocked(true);
}

void unlock(Movie &m){
    cout<<"Unlocking Movie"<<endl;
    m.setIsLocked(false);
}

class LockMovie{
    private:
        Movie &lockPtr;
    
    public:
        LockMovie(Movie &ptr):
        lockPtr(ptr){
            lock(lockPtr);
        }

        ~LockMovie(){
            unlock(lockPtr);
        }
};

int main()
{   
    
    // Movie m1("Avatar","James Cameron",120);
    // Movie m2("Fast and Furious 9","Justin Lin",100);
    // Movie m3("Conjuring","James Wan",104);
    
    // Movie m11;

    // m11=m2;
    // m11.displayInfo();


    // Movie m12=m1;

    // m3=m3;

    // Movie m13;
    // m13=m1;
    // m13.displayInfo();

    //Item 5: Know what functions C++ silently writes and calls.
    //copy constructor
    //Movie m4=m3;
   // cout<<m4.getName()<<"\n";
    //cout<<m3.getName()<<"\n";
    //cout<<m3.getNumberOfMinutes()<<"\n";
    
    //Item 6: Explicitly disallow the use of compiler generated functions you do not want
    //copy constructor is private
    //Cinema b1(m1);
    //b1.getListOfMovies();
    //Cinema b2=b1;
    //assigment operator is private
    //Cinema b3;
    //b3=b1;


/*

int input;
Cinema c1;
Movie m1;
string name;
string producer;
int numberOfMinutes;

Movie m10("Avatar","James",120);
Movie m20("Fast_and_Furious_9","Justin",100);
Movie m30("Conjuring","James",104);
c1.addMovie(m10);
c1.addMovie(m20);
c1.addMovie(m30);
cout<<m1.getNumberOfMovies()<<'\n';

while(1)
    {
        
        cout<<"1.Add a movie \n";
        cout<<"2.Delete a movie\n";
        cout<<"3.Check a movie\n";
        cout<<"4.Display movies by producer\n";
        cout<<"5.Display all information for movies\n";
        cout<<"6.Quit\n";
        cout<<"Select an option: ";
        cin>>input;
        switch(input) {
            case 1: 
                cout<<"Enter name\n";
                cin>>name;
                m1.setName(name);
                cout<<"Enter producer\n";
                cin>>producer;
                m1.setProducer(producer);
                cout<<"Enter a number of minutes\n";
                cin>>numberOfMinutes;
                m1.setNumberOfMinutes(numberOfMinutes);
                c1.addMovie(m1);
                c1.getListOfMovies();
                break;
            case 2:
                cout<<"Enter name\n";
                cin>>name;
                cout<<"Enter producer\n";
                cin>>producer;
                c1.deleteMovie(producer,name);
                break;
            case 3:
                cout<<"Enter name\n";
                cin>>name;
                cout<<"Enter producer\n";
                cin>>producer;
                c1.getMovieByProducerAndName(producer, name);
                break;
            case 4:
                cout<<"Enter producer\n";
                cin>>producer;
                c1.getMoviesByProducer(producer);
                break;
            case 5:
                c1.getListOfMovies();
                break;
            case 6:
                return 0;
            default:
                cout<<"Enter a number between 1-6";
        }
    }
*/

std::cout<<"   auto_ptr    Item 13        " << std::endl;

{
     auto_ptr<Movie> m50(createMovieInstance());
     m50->displayInfo();
     auto_ptr<Movie> m51(m50);
     m51->displayInfo();
    //m50->displayInfo();
}

std::cout<<"__________________________________________________________________________________________________" << std::endl;


std::cout<<"   unique_ptr    Item 13        " << std::endl;
{
    unique_ptr<Movie> movie_unique(createMovieInstance());
    movie_unique->displayInfo();
    //unique_ptr<Movie> movie_unique2(movie_unique);               // ii unique_ptr => nu putem copia
    unique_ptr<Movie> movie_unique2 = move(movie_unique);         // transfer ownership
    movie_unique2->displayInfo();
}

std::cout<<"__________________________________________________________________________________________________" << std::endl;

std::cout<<"   shared_ptr    Item 13        " << std::endl;

{
     shared_ptr<Movie> movie_shared(createMovieInstance());
     movie_shared->displayInfo();
     std::cout<<"Number of pointers to move_shared = "<< movie_shared.use_count()<<std::endl;
     shared_ptr<Movie> movie_shared2(movie_shared);
     std::cout<<"Number of pointers to move_shared = "<< movie_shared.use_count()<<std::endl;
     movie_shared2->displayInfo();
     movie_shared2->setName("Venom");
     movie_shared->displayInfo();


    shared_ptr<Movie> movie_shared3 = move(movie_shared);
    std::cout<<"Number of pointers to move_shared = "<< movie_shared.use_count()<<std::endl;
    std::cout<<"Number of pointers to move_shared = "<< movie_shared3.use_count()<<std::endl;
    movie_shared3->setName("Flash");
    movie_shared3->displayInfo();
    movie_shared2->displayInfo();



    //m50->displayInfo();
}

std::cout<<"__________________________________________________________________________________________________" << std::endl;


Movie m1("Avatar","James Cameron",120);
LockMovie *lockMovie = new LockMovie(m1);
m1.displayInfo();
m1.checkAvailability();
delete lockMovie;
m1.checkAvailability();


return 0;
}
