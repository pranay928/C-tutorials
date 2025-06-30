#include <list>
#include <iostream>
using namespace std ;

int main(){
    
    //crate an list 
    
    list <string> cars ={"BMW","Mahendra","Tata","Suzuki"};
    
    //access list item 
    //we can not use tradisinal for loop insted use foreach
   for (string car : cars){
      cout << "acccess list : " << car << endl ;
   }
   //for getting the size of list use size()

   cout << "size" << cars.size() << endl ;

   //for modifying the first and last item 
   //for front side modification not add 
   
   cars.front() = "Tesla" ;
   cout << "after modification of front element : " << cars.front() << endl ;
   
   //for backside modification not add
   
   cars.back() = "MG" ;
   cout << "After the modifiaction of last element : " << cars.back() << endl ;

   //after modification
   for (string car : cars)
   {
           cout << "Modified list : " << car << endl;
   }
   cout << "size : " << cars.size() << endl;

   //now lets add element to our list from both side 
   
   //front add
   cars.push_front("Toyota");
   for (string car : cars)
   {
       cout << "after adding on front one element : " << car << endl;
    }
    cout << "size : " << cars.size() << endl;

    //backside add 
    cars.push_back("nano");
    for (string car : cars)
    {
        cout << "after adding on back one element : " << car << endl;
   }
   cout << "size : " << cars.size() << endl;

   //now lets remove element from our list
   //front side remove
   cars.pop_front();
   for (string car : cars)
   {
       cout << "removed from front : " << car << endl;
   }
   cout << "size : " << cars.size() << endl;

   //back side remove 
   cars.pop_back();
   for (string car : cars){
    cout << "removed from back " << car << endl ;
 }
 cout << "size : " << cars.size() << endl;

 return 0;
}