// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    //Implicit conversions
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66; //No f character so -7.66 is a double constant, converted to float implicity
    sgn = flt; // float will be converted to integer and truncated to -7
    unsgn  = sgn; // Will give -7 unsigned so 7 less than 2^32

    std::cout << " float: " << flt << std::endl;
    std::cout << " int32: " << sgn << std::endl;
    std::cout << "uint32: " << (int32_t) unsgn << std::endl; //Cast bask to signed allows the value to be -7
    
    std::cout << std::endl << std::endl;
    return (0);
}
