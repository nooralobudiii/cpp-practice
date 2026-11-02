#include <iostream>
#include <iomanip>

using namespace std; 


int main() {

    cout << left << setw(10) << "Course" << setw(10) << "Students" << "\n";
    cout << left << setw(10) << "C++" << right << setw(10) << "100" << "\n";
    cout << left << setw(10) << "JavaScript" << right << setw(10) << "50" << "\n";

    return 0;
}