// Object-oriented programming is about creating "objects",
// which can hold data and functions that work on that data.
#include <iostream>
#include <string>
using namespace std;

class MyClass{ //this is class 

    public: //acsses specifier 
    // private:   
    // protected: 

    int myNum ;  //attribute of class also known as veriable
    string myString;    

    void myFun(){  // methode of class also known as function 
        cout << "Hello World" << endl ;
    }
};

int main(){
    MyClass object ;  // object crated using class and we can create mulltiple object using same class
    object.myNum = 7 ; // accseing attribute of class using object 
    object.myString = "this is object" ;

    object.myFun(); //methode call from object
    cout << object.myNum << endl ; 
    cout << object.myString << endl ; 
    
    return 0 ;
}