// Learning C++ 
// Exercise 03_07
// Using Objects with Pointers, by Eduardo Corpeño 

// malloc = memory allocation, pointers dynamically allocate memory

#include <iostream>
#include <string>
#include "cow.h"

int main(){
    cow *my_cow;

    my_cow = new cow("Gertie", 3, cow_purpose::hide); // Now pointer of a cow object
    //Need to dereference for functions (*mycow) but gets messy so use member of pointer operator (->)
    std::cout << my_cow->get_name() << " is a type-" << (int) my_cow->get_purpose() << " cow." << std::endl;
    std::cout << my_cow->get_name() << " is " << my_cow->get_age() << " years old." << std::endl;

    //Delete objects no longer needed to avoid memory leakage when no longer needed, calls destructor
    delete my_cow; 
    
    std::cout << std::endl << std::endl;
    return (0);
}
