#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
int main()
{
    cout << "Hello World!" << endl;
    string name;
    cout << "What is your name?" << endl;
    cin >> name;
    cout << "Hello "<< name << "!" << endl;
    return 0; 
}