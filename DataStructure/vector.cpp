#include <iostream>
#include <vector>
using namespace std ;
//vector are same as array but we can add dynamic element in vector 
//in array we can not add element once the array is declear

int main(){
    
   vector <string> names={"pranay","ram","ganesh","sudhakar","yash"};

    //for  accesing all the value of vector  
    for (int i = 0; i < names.size(); i++) // .size() is used for getting size of vector
     {
        cout << names.at(i) << endl ;
        
     }


     //for cheking if vector is empty or not 
      cout << names.empty() << endl; //if yes retrun 1 else 0 .     

     //for changing any value inside in vector
     
     names[1] = "vansh";

     cout << "after the name change in 2nd position : " << names.at(1) << endl ;


     //for accesing onlyone value of vector

     cout << names[0] << endl ; //for first position 
     //or 
     cout << names.at(0) << endl ; //work the same and the 'at' onject come with STL library
     
     //for accesing fist and last element of vector

     //for first or front in vctor language
     cout << names.front() << endl ;
     //and for last 
     cout << names.back() << endl ;

     //for adding element in vector we can only ad element in back side 

     //for adding 
     names.push_back("sonu") ;
     cout << "After adding the name in back the name is : " << names.back() << endl ;
     
     //for deleteing from back 
     names.pop_back();
     cout << "after removing the name from back the last name is : " << names.back() << endl ; 



     return 0 ;

}