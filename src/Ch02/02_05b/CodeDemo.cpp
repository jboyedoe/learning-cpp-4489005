// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8;
    auto b = 123456788901;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f = 'd';
    auto g = "C++ rocks";

    std::cout << "The type of a is " << typeid(a).name() << std::endl; //typeid is from typeinfo header fo std
    std::cout << "The type of b is " << typeid(b).name() << std::endl;
    std::cout << "The type of c is " << typeid(c).name() << std::endl;
    std::cout << "The type of d is " << typeid(d).name() << std::endl;
    std::cout << "The type of e is " << typeid(e).name() << std::endl;
    std::cout << "The type of f is " << typeid(f).name() << std::endl;
    std::cout << "The type of g is " << typeid(g).name() << std::endl;

    // Here i for int, l for long, f for float, d for double, b for bool, c for char, PKc for pointer to const char(string) but some different IDEs can show different names

    std::cout << std::endl << std::endl;
    return (0);
}
