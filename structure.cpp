#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    int age;
    char marks;
    
};

int main(){

    student std1;
    std1.name = "Pranay"  ;
    std1.age = 23 ;
    std1.marks = 'A' ;

    cout << "student name is : " << std1.name << endl ;
    cout << "student age is : " << std1.age << endl ;
    cout << "student maeks is : " << std1.marks << endl  ;

    student std2;
    std2.name = "himanshu";
    std2.age = 27 ;
    std2.marks = 'A' ;

    cout << "student name is :" <<  std2.name << endl;
    cout << "student age is :" <<  std2.age << endl;
    cout << "student marks is :" <<  std2.marks << endl;

        return 0;
}