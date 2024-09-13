// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

// #include is a directive to insert the reference file, 
// <> includes known standard or installed libraries so don't need extenstion like .h or .hpp
#include <iostream> 

#include <string>

// Provides fixed length definitions for integer types to not depend on primitive types like int or char
//This stdint one is from C not C++ so thats why it has prefix c
#include <cstdint> 

//#define defines symbols to mean whatever we type at the right (symbols are called macros), finds and replaces
// Use all caps for defined constants
// Every time the preprocessor finds CAPACITY will replace with 5000
// Do not end with a ;
#define CAPACITY 5000

// Need for #ifdef DEBUG to work
// Doesn't need to be assigned if only used for #ifdef directive
#define DEBUG

int main(){
    int32_t large = CAPACITY; //32 bit signed integer from stdint, _t for type
    uint8_t small = 37; //8 bit unsigned integer

//Include code conditionally with #ifdef (if defined), not usually indented with the code
#ifdef DEBUG
    std::cout << "[About to perform the addition]" << std::endl;
#endif
    large += small;
    std::cout << "The large integer is " << large << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
