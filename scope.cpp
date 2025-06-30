#include <iostream>
using namespace std ;
int Globle = 5 ; //globle veriable 

void function()
{
    int Local = 6 ; //local veriable
    //but we can not use local veriable in out of it scope
    cout << ++ Globle << endl ;
    
}
int main()
{ //scope start

    int num = 7 ;   //also local     
    cout << Globle ;   //we can use globle veriable in local scope
    function()  ;
 
}//scope end 
