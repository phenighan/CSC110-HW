//Program Area calculates the area of a square.
//THe user is prompted to enter the number of inches on each
//side. Note that "endl" in line 7 ends in the letter "l", not
//the number one.

#include <iostream>
using namespace std;
int main ()
{
    int inches;
    cout << "Enter the number of inches on a side."
    << endl;
    cout << "Press the return key."
    << endl;
    cin >> inches;
     cout
    << "The area is " << inches * inches << "."
    <<endl;
    return 0;
}
