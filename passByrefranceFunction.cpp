#include <iostream>
using namespace std;

void addTwoNum(int &a, int &b)
{
    int c ;
    c = a + b ;
    cout << " your answer is " << c ;
}

int main()
{
    int num1;
    int num2;

    cout << "enter the first number : ";
    cin >> num1 ;
    cout << "enter the second number : ";
    cin >> num2 ;
    addTwoNum(num1,num2);
    return 0 ;

}