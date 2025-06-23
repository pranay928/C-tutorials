#include <iostream>
#include <string>
using namespace std;

int main()
{
    //referance is just nick name for variable it's refering to  
    string myName = "Pranay" ;
    string &nav =myName ;
    
    
    // now nav and myName have same valueb
    // Both myName and nav refer to the same memory location. Changing one affects the other.

    cout << myName << endl ;
    cout << nav << endl ;

    // '&' is also use to show memory addres of any veriable

    int memoryAdd = 2 ;
    string name = "Pran" ;

    cout << &memoryAdd << endl ; // 0xb9053ffdac
    cout << &name << endl;       // 0x9caf5ffa50

    //Pointer are veriable that store the memory add of anather veriable

    int num = 5 ;
    int* pnum = &num ;

    // pointer (*) pnum now store the vaue of num memory location    

    cout << num << endl ;
    cout << pnum << endl ;

    return 0 ;

}
