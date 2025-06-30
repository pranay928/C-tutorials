#include <iostream>
#include <string>
using namespace std;

//foncton is just code that is only exicute when call 
//void mean it return nothing only do somthing 
void add( int x ,int y) //'()' inside paranthisis they are arguments its pass by value or pass by referance
{
   int c;
   c = x + y ;
   cout<< "your answer is " << c << endl; ;
} 

int main()
{
    int a ;
    int b  ;
    cout << "enter the first number : ";    
    cin >> a ;
    cout << "enter the second number : ";
    cin >> b ;

    add(a,b); //function call
    return 0;

}
