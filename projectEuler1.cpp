#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
int main()
{
    cout << "This program is designed to tackle project Euler's first problem. \nPlease enter a number below a thousand:" << endl;
    double x;
    double y;
    cin >> x;
    cout << "Please enter a second number:" << endl;
    cin >> y;
    cout << "Now we will calculate the sum of the multiples of " << x << " and " << y << " below a 1000!" << endl;
    return 0;
}