#include <iostream>
using namespace std ;

class MyClass{
    public:
    void fun(){
        cout << "inside method call" << endl ;
    }

    void myFuncton(); 

};

void MyClass::myFuncton(){    // :: are scope resolustion oprator 
    cout << "outside method" << endl ;

};

int main(){
    MyClass hello ;
    hello.myFuncton();
    hello.fun();
    return 0 ;

}