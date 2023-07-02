#include <iostream>
#include <array> //for size() and max_size()

using namespace std;

int main(){
    
    array<int, 6> arr = {1, 2, 3, 4, 5, 6};

    cout << "The number of array element is: ";
    cout << arr.size() << endl;

    cout << "Maximum elements array can hold is: ";
    cout << arr.max_size() << endl;

    return 0;
}