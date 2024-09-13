// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring> //Functions to handle character array strings (c prefix --> from c standard library)

int main(){
    const size_t LENGTH1 = 25;

    // Character arrays are lists of characters ending in 0
    // Used to keep code compatible with existing c code
    char array_str1[LENGTH1] = "Hey guys! "; //Unfilled bits are initialized to 0, also ends in 0
    char array_str2[] = "What's up?";

    std::string std_str1 = "Hi everybody! ";
    std::string std_str2 = "How's the going?";

    // Standard library distribution impacts which functions that can be used for concatenation
    strncat(array_str1, array_str2, LENGTH1);
    std::cout << array_str1 << std::endl;
    //Overloading an operator means you can redefine the operation performed by an existing operator
    // + means addition for numbers but means concatenation for the string class
    std::cout << std_str1 + std_str2 << std::endl; //strings remain intact after opertion


    std::cout << std::endl << std::endl;
    return (0);
}
