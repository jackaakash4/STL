#include <iostream>
#include <array> //for fill() and empty()

using namespace std;

int main(){
    
    array<int, 6> arr;

    array<int, 6> arr1;

    arr1.empty()? cout << "Array is empty": cout << "Array not empty";
    cout << endl;

    arr.fill(0);    //filling array with 0

    cout << "Array after filling operation is: ";
    for (int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }

    return 0;
}