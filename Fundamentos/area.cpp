// PI * radius * radius
// PI = 3.14159
// PI = 3.14159

#include <iostream>
using namespace std;

int main () {
    const double PI = 3.141592;
    double radius;
    cout << "Enter the radius: ";
    cin >> radius;
    cout << "The area is: " << PI * radius * radius << endl;
    return 0;
}