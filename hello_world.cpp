#include <iostream>
#include <string>
int main()
{
    std::cout << "Hello World!" << '\n';
    std::string name;
    std::cout << "What is your name? \n";
    std::cin >> name;
    std::cout << "Hello "<< name << "!" << '\n';
    return 0; 
}