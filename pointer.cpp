#include <iostream>
#include <string>
using namespace std;

int main(){
    // A pointer (*) is a variable that stores the memory address of anther veriable as its value.

    int num = 10 ;
    cout << num << endl;
    // (*) pointer  -- (&) memory location 
    int *point = &num ;
    cout << point << endl << endl ; 

    // //Dereference of pointer in which we also use (*) 
    // //Dderefrence is used to give value of pointed veriable using pointer  
    // //example 
     int A = 1 ;
     int* pA = &A ;
    
     cout << pA << endl ; //show memory address
     cout << *pA << endl; // show value inside memory address also clled Dereference

     // when (*) use with data type like int its declear pointer when use alone it Dereference

    //  int y = 5 ;
    //  cout << y << endl ;
    //  cout << &y << endl ;

    //  int* py = &y ;
    //  cout << py++ << endl ;
    

   


     return 0;
}
