#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int main(){
    vector<int> ivec;
    for(int i = 0;i<10;i++){
        ivec.push_back(rand());
    }
    vector<int>::iterator iter = ivec.begin();
    for(;iter!=ivec.end();iter++){
        cout << *iter << " ";
    } 
    cout << endl;
    return 0;
}