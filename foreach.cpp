#include <iostream>
#include <string>

using namespace std;

int main()
{
    int arr[5] = {2, 3, 2, 5, 4};

    for(int i : arr )
    {
        cout << i << endl ;
    }

    string name = "Pranay" ;

    for (char c : name)
    {
        cout << c << endl;
    }
    return 0 ;
}
