#include<iostream>
int main(){

    std::string name;
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "Hello, " << name << "! Nice to meet you!"
              << std::endl;

   

    std::string major;
    std::cout << "What is your major?" << std::endl;
    std::getline(std::cin >> std::ws, major);
    std::cout << "Your major is: " << major << std::endl;

    float gpa;
    std::cout << "What is your GPA?" << std::endl;
    std::cin >> gpa;
    std::cout << "Your GPA is: " << gpa << std::endl;
    return 0;
}
