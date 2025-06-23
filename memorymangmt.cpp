#include <iostream>
#include <string>
using namespace std;

int main()
{
    int *pt;   //delcaring pointer veriable
    pt = new int;  //pointer variable point on newly crated memory location
    *pt = 100; //(*) for  storing value in memeory location
    cout << *pt << endl ; //show vaue (derefrance )
    cout << pt <<endl; // show memory location  

    delete pt; //IMP to delete the pointer after the work is done if not then memory leak happen
    
   
   
    //now for array

    int * ptr ;
    ptr = new int[5];
     for (int i = 0; i < 5; i++)
     {
        cout << "enter the " << i +1 << " number" <<endl ;
        cin >> ptr[i] ;
       
    }
    for (int i = 0; i < 5 ; i++)
    {
        cout << ptr[i] << endl ;
    }

    delete[] ptr ;



        return 0;
    }