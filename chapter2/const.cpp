/**
 * @file const.cpp
 * @author your name (you@domain.com)
 * @brief const定义常量，定义后就不能被修改，所以定义时必须初始化
 *         引用是一种符合类型，不能定义引用类型的引用，但可以定义其他任何类型的引用，只要引用存在就不能换绑
 *          const引用是指向const对象的引用（只读）
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
int main(){
    const int i = 10;
    std::cout << i <<std::endl;
    int v1 = 11;
    const int &v = v1;
    v1 = 11;
    std::cout << v <<std::endl;
    return 0;
}