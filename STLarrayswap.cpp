#include <iostream>
#include <array> // for swap

using namespace std;

int main(){
    
    array<int, 6> arr = {1, 2, 3, 4, 5, 6};

    array<int, 6> arr1 = {7, 8, 9, 10, 11, 12};

    cout << "The first array before swapping: ";
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "The second array before swapping: ";
    for (int i = 0; i < 6; i++)
        cout << arr1[i] << " ";
    cout << endl;

    arr.swap(arr1);

    cout << "The first array after swapping: ";
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "The second array after swapping: ";
    for (int i = 0; i < 6; i++)
        cout << arr1[i] << " ";
    cout << endl;


    return 0;
}