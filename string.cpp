#include <iostream>
#include <string>
using namespace std;

int main()
{
    string txt = "hello";
     //to show last char
      cout << txt[txt.length() - 1];

      //for chagin any char in string
      txt[0] = 'p'; //pello
      cout << txt[0] << endl;

    string newstring = "chao" ;
    cout << newstring.at(0) << endl ;  
    cout << newstring.at(1) << endl ;  
    cout << newstring.at(2) << endl ;  
    cout << newstring.at(3) << endl ;

    //for taking input as a string

    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName);
    cout << "Your name is: " << fullName;

    // Type your full name: John Doe
    // Your name is: John Doe

    

    return 0;
}