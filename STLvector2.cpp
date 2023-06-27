#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector <int> v2;

    for(int i = 1; i <= 5; i++){
        v2.push_back(i);
    }

    cout << "\nSize: " << v2.size(); //size of the v2 vector
    cout << "\nCapacity: " << v2.capacity(); //capacity of v2 vector
    cout << "\nMax Size: " << v2.max_size(); //max size of vector

    //resize the vector size to 4
    v2.resize(4);

    cout << "\nSize: " << v2.size();

    if(v2.empty() == false){
        cout << "\nVector is not empty\n";
    }
    else
        cout << "\nVector is empty\n";

    for (auto i = v2.begin(); i != v2.end(); i++){
        cout << *i << " ";
    }
}