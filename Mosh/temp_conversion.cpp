#include <iostream> 

using namespace std; 

int main() {

    int temp_fahrenheit;

    cout << "What is the temperature in the UK? ";
    cin >> temp_fahrenheit;

    int temp_celsius = (temp_fahrenheit - 30)/ 2;

    cout << "Temperature in Fahrenheit: " << temp_fahrenheit << "°F" << "\n";
    cout << "Temperature in Celsius: " << temp_celsius << "°C" << "\n";

    return 0;
}
