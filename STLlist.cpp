//list container
#include <iostream>
#include <list>
using namespace std;

int main(){
    list <int> gqlist{12, 45, 8, 6};

    for (auto i : gqlist){
        cout << i << " ";
    }
    return 0;
}