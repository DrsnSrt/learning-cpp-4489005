// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::cout << "Please enter your name" << std::endl;
    std::string name;
    std::cin >> name;
    std::cout << "Nice to meet you " << name;

    std::cout << std::endl << std::endl;

    return 0;
}