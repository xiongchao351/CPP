#include <iostream>
#include <string>
std::string s1 = "hello";
int main(){
    std::string s2 = "world";
    std::cout << s1 << " " << s2 << std::endl;
    int s1 = 42;
    // 局部变量s1屏蔽了全局变量s1
    std::cout << s1 << " " << s2 << std::endl;
    return 0;
}