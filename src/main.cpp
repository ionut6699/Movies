#include "../headers/Cinema.hpp"
#include "../headers/Movie.hpp"

int main()
{   
    /*
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
*/
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

return 0;
}
