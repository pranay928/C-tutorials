// Recursion is the technique of making a function call itself.

#include <iostream>
using namespace std ;

int factorial(int n)
{
    if (n > 0 )
    {
       return n + factorial( n - 1); // recursion function calling itself
    }
    else
    {
       return 0 ;
    }
}

int main()
{
    int num;
    int fact ;
    cin >> num;
    fact = factorial(num);
    cout << fact ;
    return 0 ;
}