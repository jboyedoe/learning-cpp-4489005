// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 
//Arrays fixed in size, elements contiguous in memory


#include <iostream>

// #define AGE_LENGTH 4 // macros have no scope

int main(){
    // size_t type more appropriate for sizes than type int
    const size_t AGE_LENGTH = 4; //constant recommended rather than macro
    int age[AGE_LENGTH]; 
    
    // initializing array at declaration, auto does not work
    float temperature[] = {31.5, 32.7, 38.9}; //initializes 3 doubles to this float array, implicit conversion

    age[0] = 25;
    age[1] = 20;
    age[2] = 19;
    age[3] = 19;

    std::cout << "The Age array has " << AGE_LENGTH << " elements." << std::endl;
    std::cout << "Age[0] = " << age[0] << std::endl;
    std::cout << "Age[1] = " << age[1] << std::endl;
    std::cout << "Age[2] = " << age[2] << std::endl;
    std::cout << "Age[3] = " << age[3] << std::endl;
    std::cout << std::endl;
    std::cout << "Temp[0] = " << temperature[0] << std::endl;
    std::cout << "Temp[1] = " << temperature[1] << std::endl;
    std::cout << "Temp[2] = " << temperature[2] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
