#include <iostream>
#include <array>

using namespace std;

int main(){
    array <int,5> ar = {1, 2, 3, 4, 5};

    cout << "First element of array is : ";
    int &a= ar.front();
    cout << a << endl;

    cout << "Last element of array is : ";
    int &b = ar.back();
    cout << b << endl;

    //change first and last element of array using these reference

    a = 10;     //1 changed to 10
    b = 60;     //5 changed to 60

    cout << "array after updating first and last element: \n";
    for (auto x: ar){
        cout << x << " ";

    }
    cout << endl;

    return 0;
}