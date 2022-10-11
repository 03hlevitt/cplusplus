#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

int calculation(int x, int y);

int main()
{
    cout << "This program is designed to tackle project Euler's first problem. \nPlease enter an integer below a thousand:" << endl;
    int x;
    int y;
    cin >> x;
    cout << "Please enter a second integer:" << endl;
    cin >> y;
    cout << "The sum of the multiples of " << x << " and " << y << " is: " << calculation(x,y) << endl;
    return 0;
}

int calculation(int x, int y)
{
    int z = 0;
    for (int i = 1; i <1000; ++i) {
        if (i % x == 0 or i % y == 0) {
            z += i;
        }
    }
    return z;
}