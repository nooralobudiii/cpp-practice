#include <iostream>

using namespace std; 

int main() {
    int secret_number = 21;

    int guess;
    int guess_count = 0;
    while ( guess != secret_number){
        cout << "Guess the Secret Number: ";
        cin >> guess;
        guess_count += 1;

        if (guess != secret_number) {
        cout << "Wrong! Guess Again! \n"; }
    } 
    
    cout << "You guessed correct!!! \n";
    cout << "Total guess count: " << guess_count << "\n";
    return 0;
    
}