#include <iostream>

using namespace std; 

int rows;
cout << "Rows: ";
cin >> rows;

for (int i = 1; i <= rows; i++){
    for (int j = 0; j < 1; j++) {
        cout << "*";
    }
    cout << "\n";
}