// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5; // single line comment

/* Multi
* line
* comment */

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl; // 0 is flase in c++
    my_flag = true;
    std::cout << "flag = " << my_flag << std::endl; //flag = 1 is a valid true value in c++
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    unsigned int positive; //declarations can happen anywhere in the code and not just in the scope
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl; //prints 2^32 -2 because unsigned so only positive and wraps from 0 to 2^32
    
    std::cout << std::endl << std::endl;
    return (0);
}
