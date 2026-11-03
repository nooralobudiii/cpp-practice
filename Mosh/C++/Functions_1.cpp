#include <iostream>

using namespace std; 

void  maximum (int x, int y) {
    if (x > y) {
    cout << x << " is greater than " << y << "\n";
} else {
    cout << y << " is greater than " << x << "\n";
}
}

int main() {
    maximum(10, 20);
    return 0;
}