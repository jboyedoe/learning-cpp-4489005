// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string> // String header file from standard library

int main(){
    std::string str; //String variable declaration
    std::cout << "What is your name?" << std::endl;
    std::cin >> str; // Will hold user input >> as input instead of <<, only works for single words
    std::cout << "Hello " << str << std::endl;

    // His solution
    // std::string str; 
    // std::cout << "Enter your name: " << std::flush; 
    // !!Flush used to make sure output is completely snet to the terminal before waiting for user input
    // std::cin >> str;
    // std::cout << "Nice to meet you, " << str << "!" << std::endl; //Works as concatenation

    std::cout << std::endl << std::endl;
    return (0);
}
