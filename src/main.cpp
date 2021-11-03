#include "../headers/Cinema.hpp"
#include "../headers/Movie.hpp"

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


return 0;
}
