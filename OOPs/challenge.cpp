    // Create a class called Book with the following attributes :

// title(string)
// author(string)
// year(int)
// Then create two objects of the class and print their attribute values.
// Matilda, Roald Dahl, 1988 
// The Giving Tree, Shel Silverstein, 1964

#include <iostream>
#include <string>

using namespace std ;

class Book{

    public:

    string title;
    string auther;
    int year;
   
};

int main(){

    Book book1 ;
    Book book2 ;

    book1.title = "Matilda" ;
    book2.title = "The Giving Tree" ;

    book1.auther = "Roald Dahl" ;
    book2.auther = "Shel Silverstein" ;

    book1.year = 1998 ;
    book2.year = 1964 ;

    cout << book1.title << ", " << book1.auther << ", " << book1.year << endl ;
    cout << book2.title << ", " << book2.auther << ", " << book2.year << endl ;

}