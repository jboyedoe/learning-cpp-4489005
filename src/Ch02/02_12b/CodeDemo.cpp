// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

// Enumerations inherited from C not suitable for object oriented
// C style enumerators exist in the global scoep and lack strong type checking
// C++11 standard added enum classes (scoped enums/strongly typed enums)

#include <iostream>
#include <cstdint>

// C style enum, names here don't have a scope and act like global vars
enum cow_purpose {dairy, meat, hide, pet}; //Assigned 0,1,2,3
// enum grocery_section {dairy, frozen, meat, laundry, canned, bakery}; // Do get redefinition of enumerator err

//COmpiler will enforce the correct use of their distinct type and not assume they are integers
enum class cow_purpose_1 {dairy, meat, hide, pet};
enum class grocery_section {canned, frozen, meat, laundry, dairy, bakery};

int main(){
    int meat = 8;
    int a;
    

    a = meat;
    // a = cow_purpose::meat; // Not possible since meat is not an integer
    cow_purpose_1 b;
    b = cow_purpose_1::meat; //can cast to int if b was int but better to initialize b as cow_purpose type

    //If using C enum, will print 8 instead of 1 if 8 is meat in the main function
    std::cout << "a = " << a << std::endl;
    
    // Have to cast to int because the insertion operator for cout is not defined for upper ends of the cow     purpsoe type
    std::cout << "b = " << (int) b << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
