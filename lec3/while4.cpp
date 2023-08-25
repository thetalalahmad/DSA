// Fahrenheit to Celcius Conversion
// C = (F-32)*5/9
#include <iostream>
using namespace std;
int main()
{
    float fahrenheit;                                 // initialize the value of fahrenheit
    cout << "Enter the value of fahrenheit: ";
    cin >> fahrenheit;                                 // take input from the user
    float celcius = (5.0 / 9) * (fahrenheit - 32);     // calculate the value of celcius
    cout << fahrenheit << " F = " << celcius << " C "; // display the value of celcius
    return 0;
}