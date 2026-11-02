#include <iostream>

using namespace std; 

int main() {

    string street;
    cout << "Please enter your Street: ";
    getline(cin, street);

    string city; 
    cout << "Please enter your City: ";
    getline(cin, city);

    string state;
    cout <<  "Please enter your State: ";
    getline(cin, state);

    string zip_code; 
    cout << "Please enter your Zip Code: ";
    getline(cin, zip_code);

    cout << street << "\n" << city << ", " << state << ", " << zip_code << "\n";

    return 0;
   
}