#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> v1;

    for (int i = 1; i <= 5; i++){
        v1.push_back(i);
    }
    
    cout << "Output of begin and end" << endl;
    for(auto i = v1.begin(); i != v1.end(); i++){
        cout << *i << " ";
    }

    cout <<"\nOutput of cbegin and cend" << endl;
    for (auto i = v1.cbegin(); i!= v1.cend(); i++){
        cout << *i << " ";
    }

    cout <<"\nOutput of rbegin and rend" << endl;
    for (auto ir = v1.rbegin(); ir!= v1.rend(); ir++){
        cout << *ir << " ";
    }

    cout <<"\nOutput of crbegin and crend" << endl;
    for (auto ir = v1.crbegin(); ir != v1.crend(); ir++){
        cout << *ir << " ";
    }

}