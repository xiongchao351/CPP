#include <iostream>
#include <cctype>
using namespace std;
int main(){
    string s = "hello world!!!";
    // string::size_type punct_cnt = 0;
    int punct_cnt = 0;
    for(int index = 0;index != s.size();index++){
        if(ispunct(s[index])){
            ++punct_cnt;
        }
    }
    cout << punct_cnt << endl;
    return 0;
}