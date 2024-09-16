// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> cattle;

    cattle.push_back(cow("Betty", 6, cow_purpose::meat));
    cattle.push_back(cow("Libby", 4, cow_purpose::hide));
    cattle.push_back(cow("Trudy", 5, cow_purpose::pet));
    cattle.push_back(cow("Betsy", 2, cow_purpose::dairy));

    //begin returns iterator to the first elem
    std::cout << "The first cow is " << cattle.begin()->get_name() << std::endl; 
    std::cout << "At index 1 we have " << cattle[1].get_name() << std::endl;
    
    //Subtract one or use prev because cattle.end returns iterator starting after last element
    //prev params are the iterator and how many places back to go in it
    std::cout << "Next to last is " << prev(cattle.end(), 2)->get_name() << std::endl;
    std::cout << "The last cow is " << (cattle.end() - 1)->get_name() << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
